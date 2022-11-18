//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
class Solution {
  public:
    long long reversedBits(long long X) 
    {
        int arr[32];
        for(int i=31;i>=0;i--)
        {
            arr[i]=X%2;
            X/=2;
        }
        X=0;
        for(int i=31;i>=0;i--)
        {
            X+=pow(2,i)*arr[i];
        }
        return X;
    }
};

//{ Driver Code Starts.
int main() {
    int t;
    cin >> t;
    while (t--) {
        long long X;
        
        cin>>X;

        Solution ob;
        cout << ob.reversedBits(X) << endl;
    }
    return 0;
}
// } Driver Code Ends