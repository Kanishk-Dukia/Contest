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
//         int a,b,c;
//         cin>>a>>b>>c;
//         int sumab = a+b;
//         int sumbc = b+c;
//         int sumca = c+a;

//         if(sumab == c || sumbc == a||sumca == b){
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

//         sort(a,a+n);
//         bool ok = 1;

//         ll max = a[0];
//         for(ll i = 1;i<n;i++){
//             if(a[i]>max){
//                 max = a[i];
//             }

//             else{
//                 ok = 0;
//                 break;
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
       int countR = 0;
       int countB = 0;
       int main = 0;
       bool ok =1;

       for(int i = 0;i<64;i++){
         char x;
         cin>>x;
         if(x == 'R'){
            countR++;
            if(countR == 8){
            cout<<"R"<<endl;
            ok =0;
            break;
         }
         }
         main++;
         
         if(main == 8){
            countR =0;
            main = 0;
         }
       }

       if(ok){
        cout<<"B"<<endl;
       }

    }
    return 0;
}

// #include<bits/stdc++.h>
// using namespace std;
// #define ll long long int

// int solvei(int a[],int n){
     
//      for(int i =n-1;i>=0;i--){
//         if(__gcd(a[n-1],a[i]) == 1){
//             return (n-1+1)+i+1;
//         }     
//      }

//      return -1;
// }

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

//         int a[n];

//         for(int i = 0;i<n;i++){
//             cin>>a[i];
//         }

//         cout<<solvei(a,n)<<endl;

//     }
//     return 0;
// }