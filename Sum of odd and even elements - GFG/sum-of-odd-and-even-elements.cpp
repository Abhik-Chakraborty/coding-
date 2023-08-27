//{ Driver Code Starts


#include<bits/stdc++.h>
using namespace std;

// } Driver Code Ends

class Solution
{
	public:
		vector<int> find_sum(int n)
		{
		    int a=0, b=0;
		    vector <int> aa;
		    // Code here
		    for(int i = 0; i<=n; i++){
		        if(i%2 == 0){
		            a+=i;
		        }
		        else{
		            b+=i;
		        }
		    }
		    aa.push_back(b);
		    aa.push_back(a);
		    
		    
            return aa;
		}
};

//{ Driver Code Starts.
int main(){
    int T;
    cin >> T;
    while(T--)
    {
    	int n;
    	cin >> n;
    	Solution ob;
    	vector<int> ans = ob.find_sum(n);
    	for(auto i: ans)
    		cout << i << " ";
    	cout<<"\n";
    }
	return 0;
}
// } Driver Code Ends