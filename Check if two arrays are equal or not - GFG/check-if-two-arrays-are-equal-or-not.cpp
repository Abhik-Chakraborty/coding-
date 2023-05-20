//{ Driver Code Starts
//Initial function template for C++

#include<bits/stdc++.h>
using namespace std;
#define ll long long 

// } Driver Code Ends
//User function template for C++

class Solution{
public:
    // Function to check if two arrays are equal or not.
    bool check(vector<long long> A, vector<long long> B, int N) {
        unordered_map<long long, int> countA, countB;

        // Count occurrences of elements in array A
        for (int i = 0; i < N; i++) {
            countA[A[i]]++;
        }

        // Count occurrences of elements in array B
        for (int i = 0; i < N; i++) {
            countB[B[i]]++;
        }

        // Check if counts of all elements are the same in both arrays
        for (auto& pair : countA) {
            long long num = pair.first;
            int count = pair.second;

            // If count of an element in A is different from count in B, arrays are not equal
            if (countB[num] != count) {
                return false;
            }
        }

        // Check if counts of all elements are the same in both arrays
        for (auto& pair : countB) {
            long long num = pair.first;
            int count = pair.second;

            // If count of an element in B is different from count in A, arrays are not equal
            if (countA[num] != count) {
                return false;
            }
        }

        return true; // Arrays are equal
    }
};


//{ Driver Code Starts.
int main()
 {
    int t;
    cin>>t;
    while(t--) {
        int n;
        cin>>n;
        
        vector<ll> arr(n,0),brr(n,0);
        
        // increase the count of elements in first array
        for(ll i=0;i<n;i++)
            cin >> arr[i];
        
        
        // iterate through another array
        // and decrement the count of elements
        // in the map in which frequency of elements
        // is stored for first array
        for(ll i=0;i<n;i++)
            cin >> brr[i];
        Solution ob;
        cout << ob.check(arr,brr,n) << "\n";
    }
	return 0;
}
// } Driver Code Ends