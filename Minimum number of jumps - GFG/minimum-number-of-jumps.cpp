//{ Driver Code Starts
#include<bits/stdc++.h>
using namespace std;


// } Driver Code Ends
// Function to return minimum number of jumps to end of array

class Solution{
public:
    int minJumps(int arr[], int n){
        if(n <= 1) return 0; // No jumps empty array
        
        if(arr[0] == 0) return -1; // first element is 0 , cant move
        int maxReach = arr[0]; // Max reach from the current position
        int steps = arr[0]; // No. of steps that can be taken from the current position
        int jumps = 1; // Minimum jumps required to reach the end
        
        for(int i = 1; i < n; i++){
            if(i == n-1) return jumps; // Reached the last element, return the minimum jumps
            
            maxReach = max(maxReach, i + arr[i]); // Update the maximum reach
            
            steps--; // Reduce the steps as we move forward
            
            if(steps == 0){ // If no more steps can be taken from the current position
                jumps++; // Increment the jump count
                
                if(i >= maxReach) return -1; // Cannot reach the end if the maximum reach is not increasing
                
                steps = maxReach - i; // Update the number of steps with the remaining distance
            }
        }
        
        return -1; // Cannot reach the end
    }
};


//{ Driver Code Starts.

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n,i,j;
        cin>>n;
        int arr[n];
        for(int i=0; i<n; i++)
            cin>>arr[i];
        Solution obj;
        cout<<obj.minJumps(arr, n)<<endl;
    }
    return 0;
}

// } Driver Code Ends