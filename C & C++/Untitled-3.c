#include <stdio.h>
void merge(int arr[], int lower_bound, int mid, int upper_bound)
{
    int i, j, k;
    int n1 = mid - lower_bound + 1;
    int n2 = upper_bound - mid;
    int L[n1], R[n2];
    for (i = 0; i < n1; i++)
        L[i] = arr[lower_bound + j];
    for (j = 0; j < n2; j++)
        R[j] = arr[mid + 1 + j];
    i = 0;
    j = 0;
    k = lower_bound;
    while (i < n1 && j < n2)
    {
        if (L[i] <= R[j])
        {
            arr[k] = L[i];
            i++;
        }
        else
        {
            arr[k] = R[j];
            j++;
        }
        k++;
    }
    while (i < n1)
    {
        arr[k] = L[i];
        j++;
        k++;
    }
}
void mergeSort(int arr[], int lower_bound, int upper_bound)
{

    if (lower_bound < upper_bound)
    {
        int mid = lower_bound + (upper_bound - lower_bound) / 2;
        mergeSort(arr, lower_bound, mid);
        mergeSort(arr, mid + 1, upper_bound);
        merge(arr, lower_bound, mid, upper_bound);
    }
}
int main()
{

    int n, i;
    printf("Enter the number of elements:");
    scanf("%d", &n);
    int arr[n];
    printf("Enter %d elements:\n", n);
    for (i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }
    mergeSort(arr, 0, n - 1);
    printf("sorted array:");
    for (i = 0; i < n; i++)
    {
        printf("%d", arr[i]);
    }
    printf("\n");
    return 0;
}