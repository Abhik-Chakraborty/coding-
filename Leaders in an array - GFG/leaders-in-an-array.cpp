//{ Driver Code Starts
// C++ program to remove recurring digits from
// a given number
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
    

class Solution{
public:
    vector<int> leaders(int a[], int n){
        vector<int> result;
        int maxElement = a[n - 1]; // rightmost element is always a leader
        result.push_back(maxElement);
        
        for (int i = n - 2; i >= 0; i--) {
            if (a[i] >= maxElement) {
                maxElement = a[i];
                result.push_back(maxElement);
            }
        }
        
        reverse(result.begin(), result.end()); // reverse the result to maintain the order
        
        return result;
    }
};


//{ Driver Code Starts.

int main()
{
   long long t;
   cin >> t;//testcases
   while (t--)
   {
       long long n;
       cin >> n;//total size of array
        
        int a[n];
        
        //inserting elements in the array
        for(long long i =0;i<n;i++){
            cin >> a[i];
        }
        Solution obj;
        //calling leaders() function
        vector<int> v = obj.leaders(a, n);
        
        //printing elements of the vector
        for(auto it = v.begin();it!=v.end();it++){
            cout << *it << " ";
        }
        
        cout << endl;

   }
}

// } Driver Code Ends