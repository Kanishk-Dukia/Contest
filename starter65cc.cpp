// // #include<bits/stdc++.h>
// // using namespace std;
// // #define int long long int
// // const int d = 1e9 + 7;

// // int32_t main()
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
// //         int a,b;
// //         cin>>a>>b;

// //         int sum = a+b;

// //         if(sum ==2  || sum == 5 || sum == 7 ||sum == 3 ||sum == 11 ||sum == 13 ||sum == 17 ||sum == 19 ||sum ==  23||sum ==  29||sum ==  31){
// //             cout<<"Alice"<<endl;
// //         }

// //         else{
// //             cout<<"Bob"<<endl;
// //         }
// //     }
// //     return 0;
// // }

// // #include<bits/stdc++.h>
// // using namespace std;
// // #define int long long int
// // const int d = 1e9 + 7;

// // int32_t main()
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

// //         unordered_map<int,int> m;

// //         int a[2*n];

// //         for( int i = 0;i<2*n;i++){
// //             cin>>a[i];
// //             m[a[i]]++;
// //         }
         

// //         bool ok = 1;
// //         for(auto &value : m){
// //             if(value.second > 2){
// //                 ok = 0;
// //                 break;
// //             }
// //         }

// //         if(ok){
// //             cout<<"YES"<<endl;
// //         }

// //         else{
// //             cout<<"NO"<<endl;
// //         }
// //     }
// //     return 0;
// // }

// #include<bits/stdc++.h>
// using namespace std;
// #define int long long int
// const int d = 1e9 + 7;

// int32_t main()
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

//         vector<int> v(n);

//         for(int i = 0;i<n;i++){
//             cin>>v[i];
//         }
        
//         auto it =  find(v.begin(),v.end(),k);
        

//         if(it != v.end()){
//            int index = it - v.begin() +1;
//            if(index == n && n != 1){
//             cout<<"NO"<<endl;
//            }
//            else{
//             cout<<"YES"<<endl;
//            }
//         }

//         else{
//             cout<<"NO"<<endl;
//         }

        
//     }
//     return 0;
// }

#include<bits/stdc++.h>
using namespace std;
#define int long long int
const int d = 1e9 + 7;

int32_t main()
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
        int n,q;
        cin>>n,q;

        vector<int>v(n);

        for(int i = 0;i<n;i++){
            cin>>v[i];
        }

        while(q--){
            int k,l1,r1,l2,r2;
            cin>>k>>l1>>r1>>l2>>r2;

             
        }
    }
    return 0;
}