//{ Driver Code Starts
//Initial function template for C++

#include<bits/stdc++.h>
using namespace std;

// } Driver Code Ends
//User function template for C++

class Solution{
public:
   
    int partition(int arr[], int l, int r) {
        int pivot = arr[r]; 
        int i = l - 1; 

        for(int j = l; j <= r - 1; j++) {
            if(arr[j] < pivot) {
                i++;
                swap(arr[i], arr[j]);
            }
        }

        swap(arr[i + 1], arr[r]); 
        return i + 1; 
    }

    
    int quickSelect(int arr[], int l, int r, int k) {
        if(l == r) return arr[l]; 

        int pivotIndex = partition(arr, l, r); 

        if(pivotIndex == k) return arr[pivotIndex]; 

        if(k < pivotIndex) return quickSelect(arr, l, pivotIndex - 1, k); 
        else return quickSelect(arr, pivotIndex + 1, r, k); 
    }

    
    int kthSmallest(int arr[], int l, int r, int k) {
        if(k > 0 && k <= r - l + 1) {
            return quickSelect(arr, l, r, k - 1); 
        }

        return -1; 
    }
};


//{ Driver Code Starts.
 
int main()
{
    int test_case;
    cin>>test_case;
    while(test_case--)
    {
        int number_of_elements;
        cin>>number_of_elements;
        int a[number_of_elements];
        
        for(int i=0;i<number_of_elements;i++)
            cin>>a[i];
            
        int k;
        cin>>k;
        Solution ob;
        cout<<ob.kthSmallest(a, 0, number_of_elements-1, k)<<endl;
    }
    return 0;
}
// } Driver Code Ends