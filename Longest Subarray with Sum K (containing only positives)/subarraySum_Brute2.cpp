/**
 * input arr [] = {1, 2, 3, 1, 1, 1, 1, 4, 2, 3}
 * k = 3;
 * Output : 3
 * Explancation : The longest subarray with sum 3 is {1,1,1} whose length is 3.
 * Return the length of the longest subarray .
 *
 *
 * BRUTE II FORCE APPROACH => Generate all the subarray
 */
#include <bits/stdc++.h>
using namespace std;

int subarraySum(int arr[], int n, int target)
{
    int length = 0;

    for (int i = 0; i < n; i++)
    {
        int sum = 0;

        for (int j = i; j < n; j++)
        {
            sum += arr[j];
            if (sum == target)
            {
                length = max(length, j - i + 1);
            }
        }
    }

    return length;
}
int main()
{
    int arr[] = {1, 2, 3, 1, 1, 1, 1, 4, 2, 3};
    int n = sizeof(arr) / sizeof(arr[0]);
    int target = 3;

    int len = subarraySum(arr, n, target);
    cout << len;

    return 0;
}

/**
 * Time complexity => ~ O(N^2);
 * Space complexity => O(1);
 */