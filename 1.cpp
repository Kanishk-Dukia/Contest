// // #include<bits/stdc++.h>
// // using namespace std;
// // const int N=200010;
// // int a[N];
// // int main()
// // {
// // 	int t;
// // 	cin>>t;
// // 	while(t--)
// // 	{
// // 		int n;
// // 		cin>>n;
		
		
// // 		for(int i=0;i<n;i++)cin>>a[i];
// // 		long long x=2*a[0]-1;
// // 		int cnt=0;
// // 		for(int i=1;i<n;i++)
// // 		{
// // 			if(a[i]%x==0)cnt=cnt+a[i]/x-1;
// // 			else cnt+=a[i]/x;
// // 		}
// // 		cout<<cnt<<endl;
// // 	}
// // }

// // #include<bits/stdc++.h>
// // using namespace std;
// // #define ll long long int

// // int main()
// // {
// // ios_base::sync_with_stdio(false);
// // cin.tie(NULL);
// // cout.tie(NULL);
 
// // #ifndef ONLINE_JUDGE
// // freopen("input.txt","r",stdin);
// // freopen("output.txt","w",stdout);
// // #endif
 
// // 	int n;
// // 	cin>>n;

// // 	string s;
// // 	cin>>s;

// // 	int count  = 0;
// // 	int value = 0;

// // 	for(int i = s.length();i>=0;i--){
// // 		if(s[i] == '1'){
// // 			value+=pow(2,count);
// // 		}
// // 		count++;
// // 	}

// // 	cout<<value;
// // 	return 0;
// // }

// #include<bits/stdc++.h>
// using namespace std;
// #define ll long long int

// int main()
// {
// ios_base::sync_with_stdio(false);
// cin.tie(NULL);
// cout.tie(NULL);
 
// #ifndef ONLINE_JUDGE
// freopen("input.txt","r",stdin);
// freopen("output.txt","w",stdout);
// #endif
 
// 	for(int i = 0;i<6;i++){
// 		if(i<3){
// 			cout<<i<<" ";
// 		}

// 		else{
// 			cout<<3;
// 			break;
// 		}
// 	}
// 	return 0;
// }

#include<bits/stdc++.h>
using namespace std;
#define ll long long int

int main()
{
ios_base::sync_with_stdio(false);
cin.tie(NULL);
cout.tie(NULL);
 
#ifndef ONLINE_JUDGE
freopen("input.txt","r",stdin);
freopen("output.txt","w",stdout);
#endif
 
	map<char,int> m ;
	m.insert({'a',5});
	m.insert({'b',2});


    int i=0;
	while(i++<7){
		for(auto &value:m){
			if(value.second == 0){
				continue;
			}
			cout<<value.first<<endl;
			value.second--;
			
		}
	}

	// for(auto &value:m){
	// 		cout<<value.second;
			
	// 	}

	

	
	return 0;
}