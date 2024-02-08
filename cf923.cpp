// #include<bits/stdc++.h>
// using namespace std;
// #define int long long int
// const int d = 1e9 + 7;
// int powr(int a, int b) {
//     int res = 1;
//     while (b) {
//     if (b & 1) res *= a, res %= d;
//     a *= a; a %= d;
//     b /= 2;
//     }
//     return res;
// }

// int  modinv(int  n, int  d)
// {
//  return powr(n, d - 2);
// }

// void solve(){
//     int n;
//     cin>>n;

//     string s;
//     cin>>s;

//     bool ok = 1;

//     int minin = 0;
//     int maxin = 0;

//     for(int i = 0;i<n;i++){
//         if(ok && s[i] == 'B'){
//             minin = i;
//             ok = 0;
//         }

//         if(s[i] == 'B'){
//             maxin = i;
//         }
//     }

//     cout<<maxin - minin+1<<endl;
// }

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
//         solve();
//     }

//     return 0;
// }

// #include<bits/stdc++.h>
// using namespace std;
// #define int long long int
// const int d = 1e9 + 7;
// int powr(int a, int b) {
//     int res = 1;
//     while (b) {
//     if (b & 1) res *= a, res %= d;
//     a *= a; a %= d;
//     b /= 2;
//     }
//     return res;
// }

// int  modinv(int  n, int  d)
// {
//  return powr(n, d - 2);
// }

// void solve(){
//     int al,bl,k;

//     cin>>al>>bl>>k;

//     set<int> sta;

//     for(int i = 0;i<al;i++){
//         int x;
//         cin>>x;

//         if(x<=k){
//             sta.insert(x);
//         }
//     }

//     set<int> stb;
//     for(int i = 0;i<bl;i++){
//         int x;
//         cin>>x;

//         if(x<=k){
//             stb.insert(x);
//         }
//     }

//     if(stb.size() >= k/2 && sta.size() >= k/2){

//         set<int> res;
//         for(auto it: sta){
//             res.insert(it);
//         }
//         for(auto it: stb){
//             res.insert(it);
//         }

//         if(res.size() == k){
//             cout<<"YES"<<endl;
//         }

//         else{
//             cout<<"NO"<<endl;
//         }

//     }

//     else{
//         cout<<"NO"<<endl;
//     }

// }

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
//         solve();
//     }
//     return 0;
// }

// #include<bits/stdc++.h>
// using namespace std;
// #define int long long int
// const int d = 1e9 + 7;
// int powr(int a, int b) {
//     int res = 1;
//     while (b) {
//     if (b & 1) res *= a, res %= d;
//     a *= a; a %= d;
//     b /= 2;
//     }
//     return res;
// }

// int  modinv(int  n, int  d)
// {
//  return powr(n, d - 2);
// }

// void solve(){
//     int n;
//     cin>>n;

//     map<char,int> mp;

//     char st = 'a';

//     for(int i = 0;i<26;i++){

//         mp[st] = 0;
//         st++;
//     }

//     // for(auto it : mp){
//     //     cout<<it.first<<it.second<<endl;
//     // }

//     string res = "";

//     for(int i = 0;i<n;i++){
//         int x;
//         cin>>x;

//         for(char k = 'a';k<='z';k++){
//              if(mp[k] == x){
//                 res+=k;
//                 mp[k]++;
//                 break;
//              }
//         }

//     }

//     cout<<res<<endl;

// }

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
//         solve();

//     }
//     return 0;
// }

#include <bits/stdc++.h>
using namespace std;
#define int long long int
const int d = 1e9 + 7;
int powr(int a, int b)
{
    int res = 1;
    while (b)
    {
        if (b & 1)
            res *= a, res %= d;
        a *= a;
        a %= d;
        b /= 2;
    }
    return res;
}

void solve()
{
    int n;
    cin >> n;

    vector<int> v(n);

    for (int i = 0; i < n; i++)
    {
        cin >> v[i];
    }

    vector<int> ld(n);

    ld[0] = -1;

    for (int i = 1; i < n; i++)
    {
        if (v[i] == v[i - 1])
        {
            ld[i] = ld[i - 1];
        }

        else
        {
            ld[i] = i - 1;
        }
    }

    int q;
    cin >> q;

    while (q--)
    {
        int l, r;
        cin >> l >> r;

        if(ld[l-1] == ld[r-1]){
            cout<<-1<<" "<<-1<<endl;
        }

        else{
            cout<<ld[r-1]+1<<" "<<r<<endl;
        }
    }

    cout<<endl;
}

int modinv(int n, int d)
{
    return powr(n, d - 2);
}

int32_t main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

#ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
#endif

    int t;
    cin >> t;

    while (t--)
    {
        solve();
    }
    return 0;
}