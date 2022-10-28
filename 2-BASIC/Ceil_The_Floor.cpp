//{ Driver Code Starts

#include <bits/stdc++.h>

using namespace std;

pair<int, int> getFloorAndCeil(int arr[], int n, int x);

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
        auto ans = getFloorAndCeil(arr, n, x);
        cout << ans.first << " " << ans.second << "\n";
    }
    return 0;
}

// } Driver Code Ends


pair<int, int> getFloorAndCeil(int arr[], int n, int x) {
    pair<int,int> m;
    sort(arr,arr+n);
    m.first=-1;
    m.second=-1;
    for(int i=0;i<n;i++)
    {
        if(arr[i]<=x)
        {
            m.first=arr[i];
        }
        if(arr[i]>=x)
        {
            m.second=arr[i];
            break;
        }
    }
    return m;
}