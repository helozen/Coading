#include <iostream>
using namespace std;
const int MAX = 594; // My ID (Shakti)

int minDistance(const string &word1, const string &word2)
{
    int x = word1.length();
    int y = word2.length();
    int dp[MAX][MAX];

    for (int i = 0; i <= x; ++i)
    {
        for (int j = 0; j <= y; ++j)
        {
            if (i == 0 || j == 0)
            {
                dp[i][j] = 0;
            }
            else if (word1[j - 1] == word2[j - 1])
            {
                dp[i][j] = dp[i - 1][j - 1] + 0;
            }
            else
            {
                dp[i][j] = min(min(dp[i - 1][j] + 1, dp[i][j - 1] + 1), dp[i - 1][j - 1] + 2);
            }
        }
    }
    return dp[x][y];
}

int main()
{
    string word1;
    string word2;

    cout << "Enter word 1 : ";
    cin >> word1;
    cout << "Enter word 2 : ";
    cin >> word2;

    int distance = minDistance(word1, word2);

    cout << "Distance between " << word1 << " to " << word2 << ": " << distance << endl;

    return 0;
}