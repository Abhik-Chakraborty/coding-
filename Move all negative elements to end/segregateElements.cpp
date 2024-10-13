#include <bits/stdc++.h>
using namespace std;

void segregateElements(int arr[], int n)
{
    // Your code goes here
    // int n = arr.size();
    vector<int> temp;
    for (int i = 0; i < n; i++)
    {
        if (arr[i] >= 0)
        {
            temp.push_back(arr[i]);
        }
    }

    for (int i = 0; i < n; i++)
    {
        if (arr[i] < 0)
        {
            temp.push_back(arr[i]);
        }
    }

    for (int i = 0; i < n; i++)
    {
        arr[i] = temp[i];
    }
}

int main() {
    int arr[] = {1, -1, 3, 2, -7, -5, 11, 6};
    int n = sizeof(arr) / sizeof(arr[0]);

    segregateElements(arr, n);

    for (int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }
    return 0;
}