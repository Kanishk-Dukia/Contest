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
 
    int t;
    cin>>t;

    while(t--){
        int n;
        cin>>n;

        int a[n];
        
        map<int,int> m;

        for(int i = 0;i<n;i++){
            cin>>a[i];
            m[a[i]]++;
        }

        map<char,int> mc;

        string s;
        cin>>s;

        for(int i = 0;i<s.length();i++){
            m[s[i]]++;
        }

        
    }
    return 0;
}