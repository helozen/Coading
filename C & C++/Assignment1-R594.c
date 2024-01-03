#include<stdio.h>

int binarySearch(int array[], int x, int low, int high) {
    if (high >= low) {
        int mid = low + (high - low) / 2;

        // if found at mid, then return it
        if (array[mid] == x)
        return mid;

        // search the left half
        if (array[mid] > x)
        return binarySearch(array, x, low, mid-1);

        // search the right half
        return binarySearch(array, x, mid+1, high);
    }
    return-1;
}

int main(void) {
    int i, n, x;
    
    scanf("%d",&n);

    int array[n];
    
    for (i=0; i<n; i++)
    {
        scanf("%d",&array[i]);
    }
    scanf("%d",&x);
    
    int result = binarySearch(array, x, 0, n-1);
    if (result == -1)
        printf("Not found");
    else
        printf("Element found at index %d", result);
}