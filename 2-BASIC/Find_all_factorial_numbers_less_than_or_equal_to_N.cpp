//{ Driver Code Starts
#include<bits/stdc++.h> 
using namespace std; 

// } Driver Code Ends
//User function Template for C++
class Solution
{
public:
    vector<long long> factorialNumbers(long long N)
    {
        vector<long long> m;
        m.push_back(1);
        int i=1;
        while(1)
        {
            long long ans=m[i-1]*(i+1);
            if(ans>N)
                break;
            m.push_back(ans);
            i++;
        }
        return m;
    }
};

//{ Driver Code Starts.
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        long long N;
        cin>>N;
        Solution ob;
        vector<long long> ans = ob.factorialNumbers(N);
        for(auto num : ans){
            cout<<num<<" ";
        }
        cout<<endl;
        
    }
    return 0;
}
// } Driver Code Ends