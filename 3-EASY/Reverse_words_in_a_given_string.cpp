//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends

class Solution
{
    public:
    //Function to reverse words in a given string.
    string reverseWords(string S) 
    { 
        string S1="";
        stack<string> st;
        for(auto c:S)
        {
            if(c=='.')
            {
                st.push(S1);
                S1="";
                st.push(".");
            }
            else
            {
                S1+=c;
            }
        }
        st.push(S1);
        S1="";
        while(!st.empty())
        {
            S1+=st.top();
            st.pop();
        }
        return S1;
    } 
};

//{ Driver Code Starts.
int main() 
{
    int t;
    cin >> t;
    while (t--) 
    {
        string s;
        cin >> s;
        Solution obj;
        cout<<obj.reverseWords(s)<<endl;
    }
}
// } Driver Code Ends