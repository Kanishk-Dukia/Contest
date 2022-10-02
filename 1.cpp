#include<bits/stdc++.h>
using namespace std;
const int N=200010;
int a[N];
int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		int n;
		cin>>n;
		
		
		for(int i=0;i<n;i++)cin>>a[i];
		long long x=2*a[0]-1;
		int cnt=0;
		for(int i=1;i<n;i++)
		{
			if(a[i]%x==0)cnt=cnt+a[i]/x-1;
			else cnt+=a[i]/x;
		}
		cout<<cnt<<endl;
	}
}