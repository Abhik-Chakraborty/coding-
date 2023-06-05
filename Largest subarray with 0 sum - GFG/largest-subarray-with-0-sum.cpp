//{ Driver Code Starts
//Initial Template for C++

#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
/*You are required to complete this function*/

class Solution{
    public:
    int maxLen(vector<int>&A, int n)
    {
        unordered_map<int, int> sumMap;
        int maxLength = 0;
        int sum = 0;

        for (int i = 0; i < n; i++) {
            sum += A[i];

            // If the sum is 0, update maxLength to current index + 1.
            if (sum == 0) {
                maxLength = i + 1;
            }
            // If the sum is already present in the map, update maxLength if necessary.
            else if (sumMap.find(sum) != sumMap.end()) {
                maxLength = max(maxLength, i - sumMap[sum]);
            }
            // If the sum is not present in the map, store its index.
            else {
                sumMap[sum] = i;
            }
        }

        return maxLength;
    }
};


//{ Driver Code Starts.

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int m;
        cin>>m;
        vector<int> array1(m);
        for (int i = 0; i < m; ++i){
            cin>>array1[i];
        }
        Solution ob;
        cout<<ob.maxLen(array1,m)<<endl;
    }
    return 0; 
}



// } Driver Code Ends