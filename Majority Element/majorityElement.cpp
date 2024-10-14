#include <bits/stdc++.h>
using namespace std;

int majorityElement(vector<int> &arr)
{

    // your code here
    int n = arr.size();
    int majorElement = -1;
    int count = 0;

    for (int i = 0; i < n; i++)
    {
        if (count == 0)
        {
            majorElement = arr[i];
            count = 1;
        }
        else if (arr[i] == majorElement)
        {
            count++;
        }
        else
        {
            count--;
        }
    }

    // verify
    count = 0;
    for (int i = 0; i < n; i++)
    {
        if (arr[i] == majorElement)
        {
            count++;
        }
    }

    if (count > n / 2)
    {
        return majorElement;
    }
    else
    {
        return -1;
    }
}


int main() {
    vector<int> arr = {3, 1, 3, 3, 2};
    int result = majorityElement(arr);
    cout << "Majority Element: " << result << endl;
    return 0;
}