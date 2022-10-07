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
 
//     int t;
//     cin>>t;

//     while(t--){
//         int n,k;
//         cin>>n>>k;

//         string s;
//         cin>>s;

//         map<char,int> m;

//         for(int i= 0;i<s.length();i++){
//             m[s[i]]++;
//         }
        
//         vector<char>v;
//         int count = 0;
//         int main = 0;
//         bool ok =1;
//         while(main < n ){
//         for(auto &value:m){
//             if(value.second == 0){
//             cout<<value.first;          
//             break;
//            }
        
//            v.push_back(value.first);
//            value.second-=1;
//            count++;
           
//            if(count == (n/k) && ok){
//             sort(v.begin(),v.end());
//             char k = v[count-1] +1;
//             cout<<k;
//             v.clear();
//             count = 0;
//             break;
//            }
//            main++;
//            }
//         }     
//     }
//     return 0;
// }

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
 
//     int t;
//     cin>>t;

//     while(t--){
//         int n,k;
//         cin>>n>>k;

//         string s;
//         cin>>s;

//         map<char,int> m;
//         for(int i = 0;i<n;i++){
//             m[s[i]]++;
//         }

//         string ls = "";

//         for(int i = 1;i<=k;i++){

//             int length = n/k;
            
//             for(char ch = 'a';ch<='z';ch++){
//                 if(length<=0){
//                     ls+=ch;
//                     break;
//                 }
//                 length--;
//                 if(m[ch]){
//                     m[ch]--;
//                 }

//                 else{
//                     ls+=ch;
//                     break;
//                 }
//             }
//         }

//         cout<<ls<<endl;
//     }
//     return 0;
// }

#include<bits/stdc++.h>
using namespace std;
#define ll long long int

ll st(ll k ){
    if(k == 0)
    return 0;
    ll count = 0;
    ll n = sqrt(k);
    count = 3*(n-1);
    ll temp = pow(n,2);
    ll l=k-temp;
    count+=(l/n);
    return ++count;
}

int main()
{
ios_base::sync_with_stdio(false);
cin.tie(NULL);
cout.tie(NULL);
 
#ifndef ONLINE_JUDGE
freopen("input.txt","r",stdin);
freopen("output.txt","w",stdout);
#endif
 
    ll t;
    cin>>t;

    while(t--){
        ll l,r;
        cin>>l>>r;
        l--;

        cout<<(st(r) - st(l))<<endl;
    }
    return 0;
}