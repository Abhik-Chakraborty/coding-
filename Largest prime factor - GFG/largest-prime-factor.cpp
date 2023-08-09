//{ Driver Code Starts
#include<bits/stdc++.h> 
using namespace std;

// } Driver Code Ends
class Solution{
public: 
    long long int largestPrimeFactor(int N){
        // code here
        long long int largestPrime = -1; 
        while(N % 2 == 0){
            largestPrime = 2;
            N /= 2;
        }
        
        for(long long int i = 3; i <= sqrt(N); i += 2) {
            while(N % i == 0){
                largestPrime = i;
                N /= i;
            }
        }
        if(N > 2){
            largestPrime = N;
        }
        return largestPrime;
    }
};

//{ Driver Code Starts.
int main() 
{ 
    int t;
    cin>>t;
    while(t--)
    {
        int N;
        cin>>N;
        Solution ob;
        cout << ob.largestPrimeFactor(N) << endl;
    }
    return 0; 
}
// } Driver Code Ends