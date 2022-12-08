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
//         int x,y,a,b;

//         cin>>x>>y>>a>>b;

//         float tx = (float)x/a;
//         float ty = (float)y/b;

//         if(tx == ty){
//             cout<<"both"<<endl;
//         }

//         else if(tx <ty){
//             cout<<"chef"<<endl;
//         }

//         else{
//             cout<<"chefina"<<endl;
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

//         string s;
//         cin>>s;

//         ll num = 0;

//         for(ll i = 0;i<n;i++){
//             num+= (s[n-1-i]-'0')*pow(2,i);
//         }

//         ll maxi = INT_MIN;
//         // ll k =1;
//         // ll div = num/(pow(2,k));
//         ll y =0;

//         for(ll i = 1;i<=n;i++){

//             ll divf = num/(pow(2,i));
//             // cout<<div<<endl;
//             ll temp = num^divf;
//             if(temp>maxi){
//                 maxi = temp;
//                 y = i;
//             }
//             if(pow(2,i)>num){
//                 break;
//             }
//         }

//         // ll y = 0;
//         // for(int i = 0;i<n;i++){
//         //     if(s[i] == '1')
//         //     y++;

//         //     else
//         //     break;
//         // }

//         cout<<y<<endl;
//     }
//     return 0;
// }

// #include <bits/stdc++.h>
// using namespace std;
// #define ll long long int

// int main()
// {
//     ios_base::sync_with_stdio(false);
//     cin.tie(NULL);
//     cout.tie(NULL);

// #ifndef ONLINE_JUDGE
//     freopen("input.txt", "r", stdin);
//     freopen("output.txt", "w", stdout);
// #endif

//     int t;
//     cin >> t;

//     while (t--)
//     {
//         int n;
//         cin >> n;

//         string s;
//         cin >> s;

//         ll num = 0;

//         for (ll i = 0; i < n; i++)
//         {
//             num += (s[n - 1 - i] - '0') * pow(2, i);
//         }

//         // ll y= 1;
//         // ll mini = INT32_MAX;

//         // for(ll  i = 1;i<=s.length();i++){
//         //   ll divf = num/(pow(2,i));
//         //   ll temp = num ^ divf;

//         //   if(temp<mini){
//         //     mini = temp;
//         //     y = i;
//         //   }

//         // }

//         ll y = 1;

//         for (int i = 1; i < n; i++)
//         {
//             if (s[i] == '0')
//             {
//                 y++;
//             }

//             else
//             {
                
//                 break;
//             }
//         }

//         cout<<y<<endl;
//     }
//     return 0;
// }

#include<bits/stdc++.h>
using namespace std;
#define ll long long int
int count(string s){

   int ca=0,cb=0,cab=0,cba=0;
   for(int i = 0;i<s.length();i++){
     if(s[i]=='a'){
        ca++;
        if(s[i] == 'a' && s[i+1] == 'b'){
           cab++;
        }
     }

     else{
        cb++;
        if(s[i]=='b' && s[i+1] == 'a'){
            cba++;
        }
     }
   }
   
   int result = ca+cb+cab+cba;
   return result;
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
 
    int t;
    cin>>t;

    while(t--){

        string s;
        cin>>s;

        int l = count(s);
        cout<<l-1<<endl;
    }
    return 0;
}

