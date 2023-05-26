//{ Driver Code Starts
// Initial Template for C++


#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
//User function Template for C++
#include<bits/stdc++.h>
using namespace std;

class Solution{
    public:
    int numOfWays(int n, int x)
    {
        const int MOD = 1e9 + 7;
        
        // Create a list of unique natural numbers raised to the power of x
        vector<int> powers;
        for (int i = 1; i <= n; i++) {
            int power = pow(i, x);
            if (power > n) break;
            powers.push_back(power);
        }
        
        // Initialize the DP table
        vector<vector<int>> dp(powers.size() + 1, vector<int>(n + 1, 0));
        
        // Base case: there's one way to represent 0 as a sum (by not using any numbers)
        for (int i = 0; i <= powers.size(); i++) {
            dp[i][0] = 1;
        }
        
        // Fill the DP table
        for (int i = 1; i <= powers.size(); i++) {
            for (int j = 1; j <= n; j++) {
                // If the current power is greater than the current sum, we can't use it
                if (powers[i - 1] > j) {
                    dp[i][j] = dp[i - 1][j];
                } else {
                    // Otherwise, we can either use the current power or not use it
                    dp[i][j] = (dp[i - 1][j] + dp[i - 1][j - powers[i - 1]]) % MOD;
                }
            }
        }
        
        return dp[powers.size()][n];
    }
};



//{ Driver Code Starts.
int main() {
    int t;
    cin >> t;
    while (t--) {
        int  n, x;
        cin >> n >> x;
        Solution ob;
        cout<<ob.numOfWays(n, x)<<endl;
    }
    return 0;
}

// } Driver Code Ends