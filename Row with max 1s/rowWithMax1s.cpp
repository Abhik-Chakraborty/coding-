#include<bits/stdc++.h>
using namespace std;

int rowWithMax1s(vector<vector<int>> &arr)
{
    // code here
    int n = arr.size();
    int m = arr[0].size();

    int maxRowIndex = -1;
    int j = m - 1;

    for (int i = 0; i < n; i++)
    {
        while (j >= 0 && arr[i][j] == 1)
        {
            j--;
            maxRowIndex = i;
        }
    }
    return maxRowIndex;
}

int main() {
    vector<vector<int>> arr = {{0, 1, 1, 1},
                               {0, 0, 1, 1},
                               {1, 1, 1, 1},
                               {0, 0, 0, 0}};
    int result = rowWithMax1s(arr);
    cout << "The row with the most number of 1s is: " << result << endl;
    return 0;
}