//{ Driver Code Starts

#include<bits/stdc++.h>

using namespace std;


// } Driver Code Ends
//User function template for C++
class Solution{
public:	
	/* if x is present in arr[] then returns the count
		of occurrences of x, otherwise returns 0. */
	int count(int arr[], int n, int x) 
	{
	    int a=-1,b=-1;
	    if(binary_search(arr,arr+n,x)==false)
	    {
	        return 0;
	    }
	    for(int i=0;i<n;i++)
	    {
	        if(arr[i]==x)
	        {
	            a=i;
	            break;
	        }
	    }
	    for(int i=n-1;i>=0;i--)
	    {
	        if(arr[i]==x)
	        {
	            b=i;
	            break;
	        }
	    }
	    return b-a+1;
	}
};

//{ Driver Code Starts.

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n, x;
        cin >> n >> x;
        int arr[n];
        for (int i = 0; i < n; i++) {
            cin >> arr[i];
        }
        Solution ob;
        auto ans = ob.count(arr, n, x);
        cout << ans << "\n";
    }
    return 0;
}

// } Driver Code Ends