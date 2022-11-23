//{ Driver Code Starts
#include <bits/stdc++.h>

using namespace std;

// } Driver Code Ends
class Solution {
  public:
    void printSquare(int n) 
    {
        for(int i=n;i>=1;i--)
        {
            int k=0;
            for(int j=n;j>i;j--)
            {
                cout<<j<<" ";
            }
            while(k<2*i-1)
            {
                cout<<i<<" ";
                k++;
            }
            for(int j=i+1;j<=n;j++)
            {
                cout<<j<<" ";
            }
            cout<<endl;
        }
        for(int i=1;i<n;i++)
        {
            int k=0;
            for(int j=0;j<n-i;j++)
            {
                cout<<n-j<<" ";
            }
            while(k<2*i-1)
            {
                cout<<i+1<<" ";
                k++;
            }
            for(int j=i;j<n;j++)
            {
                cout<<j+1<<" ";
            }
            cout<<endl;
        }
    }
};

//{ Driver Code Starts.

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;

        Solution ob;
        ob.printSquare(n);
    }
    return 0;
}
// } Driver Code Ends