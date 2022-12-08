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
//         int n;
//         cin>>n;

//         unordered_map<int,int> m;

//         for(int i = 0;i<n;i++){
//             int x;
//             cin>>x;
//             m[x]++;
//         }

//         int maxf = INT16_MIN;
//         for(auto &value:m){
//             if(value.second > maxf){
//                 maxf = value.second;
//             }
//         }

//         cout<<n-maxf<<endl;
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

//         int result  = n/k;
//         cout<<pow(result,2)<<endl;
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
//         int n;
//         cin>>n;

//         string s;
//         cin>>s;

//         unordered_map<int,int> m;
//         m.insert({1,-1});
//         m.insert({0,-1});

//         for(int i = 0;i<n;i++){
//             m[s[i]]++;
//         }
        
//         bool ok  = 0;
//         for(auto &value:m){
//             if(value.second %2 == 0){
//                 ok = 1;
//             }

//             else if(value.second == n){
//                 ok = 1;
//             }
//         }

//         if(ok == 1){
//             cout<<"YES"<<endl;
//         }

//         else{
//             cout<<"NO"<<endl;
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
 
//     ll t;
//     cin>>t;

//     while(t--){
//         ll n;
//         cin>>n;

//         ll a[n];

//         for(ll i = 0;i<n;i++){
//             cin>>a[i];
//         }

//         ll maxc = abs(a[0] - a[n-1]);
//         bool ok = 1;
//         ll temp = maxc;



//         for(ll i = 0;i<n/2;i++){
//             if(a[i]<=a[n-1-i]){
//                 ll diff = abs(a[i] - a[n-1-i]);
//                 if(diff>maxc || diff>temp){
//                     ok = 0;
//                     break;
//                 }
//                 temp = diff;
//             }

//             else{
//                ok = 0;
//                break;
//             }
//         }

//         if(ok == 1){
//             cout<<maxc<<endl;
//         }

//         else{
//             cout<<-1<<endl;
//         }
//     }
//     return 0;
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
 
    int t;
    cin>>t;

    while(t--){
        int n,k;
        cin>>n>>k;

        int a[n];
        for(int i = 0;i<n;i++){
            cin>>a[i];
        }

        sort(a,a+n);
        int sum = 0;

        while(k>0){
            for(int i = 0;i<n;i++){
                if(a[i] == i){
                    continue;
                }
                else{
                  sum+=(2*n - i);
                }
            }
                k--;
        }



        



          

    }
    return 0;
}