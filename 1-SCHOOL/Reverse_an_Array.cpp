#include <iostream>
using namespace std;

int main() 
{
	int T,N;
	cin>>T;
	while(T--)
	{
	    cin>>N;
	    int A[N];
	    for(int i=0;i<N;i++)
	    {
	        cin>>A[i];
	    }
	    for(int i=N-1;i>=0;i--)
	    {
	        cout<<A[i]<<" ";
	    }
	    cout<<endl;
	}
	return 0;
}