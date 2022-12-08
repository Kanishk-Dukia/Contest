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

//         int ok = 0;

//         if(a%2 == 0|| b%2 == 0|| c%2==0 ){
//             ok++;
//         }

//         if(a%2 != 0|| b%2 != 0|| c%2!=0){
//             ok++;
//         }

//         if(ok == 2){
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
 
//     int t;
//     cin>>t;

//     while(t--){
//         int n;
//         cin>>n;

//         string s;
//         cin>>s;

//         int countt = 0,countm = 0;

//         for(int i = 1;i<n;i++){
//             if(s[i] == s[i-1]){
//                 countt++;
//             }
            
//         }

//         cout<<countt<<endl;
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

//         string s1,s2;
//         cin>>s1>>s2;

//         map<char,int> m1;
//         map<char,int> m2;

//         for(int i = 0;i<26;i++){
//             m1.insert({97+i,0});
//             m2.insert({97+i,0});
//         }

//         for(int i = 0;i<n;i++){
//             m1[s1[i]]++;
//         }
//         for(int i = 0;i<n;i++){
//             m2[s2[i]]++;
//         }

//         int result = 0;

//         for(char k = 'a';k<='z';k++){
//            result = max(result,min(m1[k],m2[k]));
//         }

//         cout<<result<<endl;
      
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
        int n;
        cin>>n;

        int a[n];

        for(int i = 0;i<n;i++){
            cin>>a[i];
        }

        int curm = a[1] - a[0];
        int result = a[0];

        for(int i = 1 ;i<n;i++){
            if((a[i] - a[i-1]) >= curm){
               result+=a[i];
               curm = a[i] - a[i-1];
            }
            else{
                break;
            }
        }

        cout<<result<<endl;
    }
    return 0;
}