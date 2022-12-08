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
 
// //     int t;
// //     cin>>t;

// //     while(t--){
// //         int n;
// //         cin>>n;
        
// //         string s;
// //         cin>>s;

// //         int count  = 0;

// //         int half = n/2;

// //         for(int i = 0;i<half;i++){
// //             if(s[i] == s[i+half] ){
// //                 count++;
// //             }
// //         }

// //         if(count == half){
// //             cout<<"yes"<<endl;
// //         }

// //         else{
// //             cout<<"no"<<endl;
// //         }
// //     }
// //     return 0;
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
 
//     int t;
//     cin>>t;

//     while(t--){
//         int n;
//         cin>>n;

//         vector<int>v(n);

//         for(int i = 0 ;i<n;i++){
//              cin>>v[i];
//         }

//         int maxi = *max_element(v.begin(),v.end());
//         cout<<maxi<<endl;
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

//         vector<int> v(n);

//         for(int i =0;i<n;i++){
//             cin>>v[i];
//         }

//         // int mini = v[0];
//         // int count = 0;
//         // int primel = 0;
//         // bool ok = 0;

//         // for(int i =0;i<n;i++){
//         //     if(__gcd(mini,v[i]) == mini){
//         //        count++;
//         //        primel++;
//         //     }

//         //     else if(__gcd(mini,v[i]) == v[i]){
//         //         primel++;
//         //     }

//         //     else{
//         //         break;
//         //     }
//         // }

//         int mini = v[0];
//         for(int i = 1;i<n;i++){
//             mini = __gcd(mini,v[i]);
//         }

//         int result = 0;
        
//         for(int i = 0;i<n;i++){
//             if(v[i] == mini){
//                 result++;
//             }
//         }

//         cout<<n- result<<endl;
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

//         int li = 2*n;

//         vector<int> v(2*n);
        

//         for(int i=0;i<li;i++){
//             cin>>v[i];
//         }

//         int inital = v[li-1] - v[0];

//         bool ok = 1;

//         for(int i = 0;i<li/2;i++){
//             if()
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
 
    ll t;
    cin>>t;

    while(t--){
        ll n;
        cin>>n;

        vector<ll>v(n);

        for(ll i = 0;i<n;i++){
            cin>>v[i];
        }

        ll count = 0;
        bool ok = 0;
        for(int i=0;i<n;i++){
        if(v[i]==v[0]){
            if(i==n-1){
                ok=1;
                break;
            }

            if(v[i+1]==v[n-1] && i+1<n){
                ok=1;
                break;
            }
        }
    }

    if(ok){
        cout<<"YES"<<endl;
    }
    else{
        cout<<"NO"<<endl;
    }

    
    }
    return 0;
}