#include <bits/stdc++.h>
using namespace std;

void sort012(int arr[], int n)
{
    // code here
    // int n = arr.size();
    int start = 0;
    int end = n - 1;
    int mid = 0;

    while (mid <= end)
    {
        if (arr[mid] == 0)
        {
            swap(arr[start], arr[mid]);
            start++;
            mid++;
        }
        else if (arr[mid] == 1)
        {
            mid++;
        }
        else
        {
            swap(arr[mid], arr[end]);
            end--;
        }
    }
}

int main() {
    
    int arr[] = {0, 2, 1, 2, 0};
    int n = sizeof(arr)/sizeof(arr[0]);

    sort012(arr, n);

    cout<<"Sorted Array : ";
    for(int i = 0; i < n; i++){
        cout<<arr[i]<<" ";
    }

    return 0;
}