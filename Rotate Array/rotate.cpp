#include <iostream>
using namespace std;

void rotate(int arr[], int k, int n){
  k = k % n;
  
  // temp array 
  int temp[k];
  for(int i = 0; i < k; i++){
    temp[i] = arr[n - k + i];
  }
  //shifting 
  for(int i = n - k - 1; i >= 0; i--){
    arr[i+k] = arr[i];
  }
  //Putting it back
  for(int i = 0; i < k; i++){
    arr[i] = temp[i];
  }
}

int main() 
{
   int n, k;
   cout<<"Size of the array : ";
   cin>>n;
   
   int arr[n];
   
   cout<<"Enter "<<n<<" element of the array : ";
   for(int i = 0; i < n; i++){
     cin>>arr[i];
   }
   
   cout<<"Number of Position to rotate : ";
   cin>>k;
   
   rotate(arr, k, n);
   
   cout<<"Rotated Array : ";
   for(int i = 0; i < n; i++){
     cout<<arr[i]<<" ";
   }
   cout<<endl;
   
   return 0;
}