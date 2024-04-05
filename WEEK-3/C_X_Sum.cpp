#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int row, col;
        cin >> row >> col;
        vector<vector<int>> matrix(row, vector<int>(col));
        for (int i = 0; i < row; i++)
        {
            for (int j = 0; j < col; j++)
            {
                cin >> matrix[i][j];
            }
        }
        int maxSum = INT_MIN; // Initialize maxSum to minimum possible value
        for (int i = 0; i < row; i++)
        {
            for (int j = 0; j < col; j++)
            {
                int sum1 = 0; // Initialize sum1 for each position
                // Use different variables for indices in diagonal traversals
                int row_up = i, row_down = i, col_left = j, col_right = j;
                // Calculate sum in upper-left diagonal direction
                while (row_up >= 0 && col_left >= 0)
                {
                    sum1 += matrix[row_up][col_left];
                    row_up--;
                    col_left--;
                }
                // Calculate sum in upper-right diagonal direction
                while (row_down >= 0 && col_right < col)
                {
                    sum1 += matrix[row_down][col_right];
                    row_down--;
                    col_right++;
                }
                // Restore original values of indices
                row_up = i, row_down = i, col_left = j, col_right = j;
                // Calculate sum in lower-left diagonal direction
                while (row_up < row && col_left >= 0)
                {
                    sum1 += matrix[row_up][col_left];
                    row_up++;
                    col_left--;
                }
                // Calculate sum in lower-right diagonal direction
                while (row_down < row && col_right < col)
                {
                    sum1 += matrix[row_down][col_right];
                    row_down++;
                    col_right++;
                }
                sum1-=3*(matrix[i][j]);
                maxSum = max(maxSum, sum1);
            }
        }
        // Output the maximum sum for the current test case
        cout << maxSum << endl;
    }

    return 0;
}
