// #include <bits/stdc++.h>
// using namespace std;
// #define int long long int
// const int d = 1e9 + 7;
// int powr(int a, int b)
// {
//     int res = 1;
//     while (b)
//     {
//         if (b & 1)
//             res *= a, res %= d;
//         a *= a;
//         a %= d;
//         b /= 2;
//     }
//     return res;
// }

// int modinv(int n, int d)
// {
//     return powr(n, d - 2);
// }

// void solve()
// {
//     int n;
//     cin >> n;

//     string ans = "";

//     int temp = n;
//     if (n >= 53)
//     {
//         ans = "";
//         temp -= 52;

//         char st = 'a';
//         for (int i = 1; i <= 26; i++)
//         {
//             if (temp == (st - 'a' + 1))
//             {
//                 ans.push_back(st);
//                 break;
//             }

//             st++;
//         }

//         ans += "zz";
//     }

//     else if (n >= 28)
//     {
//         ans = "a";
//         temp -= 27;

//         char st = 'a';
//         for (int i = 1; i <= 26; i++)
//         {
//             if (temp == (st - 'a' + 1))
//             {
//                 ans.push_back(st);
//                 break;
//             }

//             st++;
//         }

//         ans += "z";
//     }

//     else
//     {

//         ans = "aa";
//         temp-=2;

//         char st = 'a';
//         for (int i = 1; i <= 26; i++)
//         {
//             if (temp == st - 'a' + 1)
//             {
//                 ans.push_back(st);
//                 break;
//             }

//             st++;
//         }
//     }

//     cout << ans << endl;
// }

// int32_t main()
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
//         solve();
//     }
//     return 0;
// }

// #include <bits/stdc++.h>
// using namespace std;
// #define int long long int
// const int d = 1e9 + 7;
// int powr(int a, int b)
// {
//     int res = 1;
//     while (b)
//     {
//         if (b & 1)
//             res *= a, res %= d;
//         a *= a;
//         a %= d;
//         b /= 2;
//     }
//     return res;
// }

// int modinv(int n, int d)
// {
//     return powr(n, d - 2);
// }

// void solve()
// {
//     int n;
//     cin >> n;

//     vector<int> v(n);

//     for (int i = 0; i < n; i++)
//     {
//         cin >> v[i];
//     }

//     int sum = accumulate(v.begin(), v.end(), 0ll);

//     int mini = sum / n;

//     int cnt = 0;

//     for (int i = 0; i < n; i++)
//     {
//         if(cnt<0){
//            break;
//         }

//         if(v[i]>mini){
//             cnt = cnt + (v[i] - mini);
//         }

//         else if(mini > v[i]){
//             cnt = cnt  - (mini - v[i]);
//         }

//     }

//     if(cnt<0){
//         cout<<"NO"<<endl;
//     }

//     else{
//         cout<<"YES"<<endl;
//     }
// }

// int32_t main()
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
//         solve();
//     }
//     return 0;
// }
// #include <bits/stdc++.h>
// using namespace std;
// #define int long long int
// const int d = 1e9 + 7;
// int powr(int a, int b)
// {
//     int res = 1;
//     while (b)
//     {
//         if (b & 1)
//             res *= a, res %= d;
//         a *= a;
//         a %= d;
//         b /= 2;
//     }
//     return res;
// }

// int modinv(int n, int d)
// {
//     return powr(n, d - 2);
// }

// void solve()
// {

//     int n;
//     cin >> n;

//     vector<int> v(n + 1);

//     for (int i = 1; i <= n; i++)
//     {
//         cin >> v[i];
//     }

//     int st = v[1];

//     int stindx = 1;

//     for (int i = 2; i < n; i++)
//     {
//         if (v[i] != st)
//         {
//             break;
//         }

//         stindx++;
//     }

//     int ed = v[n];
//     int edindx = n;

//     for (int i = n - 1; i >= 1; i--)
//     {
//         if (v[i] != ed)
//         {
//             break;
//         }

//         edindx--;
//     }

//     // cout<<stindx<<endl;
//     // cout<<edindx<<endl;

//      if(stindx >= edindx  ){
//         cout<<0<<endl;
//         return;x
//     }

//     if (v[1] == v[n])
//     {
//         int temp = n - edindx + 1;
//         int ans = temp+ stindx;
//         ans = n - ans;
//         cout<<ans<<endl;
//     }

//     else
//     {
//         int temp = n - edindx + 1;
//         if (temp >= stindx)
//         {
//             int ans = n - temp;
//             cout << ans << endl;
//         }

//         else
//         {
//             int ans = n - stindx;
//             cout << ans << endl;
//         }
//     }
// }

// int32_t main()
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
//         solve();
//     }
//     return 0;
// }

// #include <bits/stdc++.h>
// using namespace std;
// #define int long long int
// const int d = 1e9 + 7;
// int powr(int a, int b)
// {
//     int res = 1;
//     while (b)
//     {
//         if (b & 1)
//             res *= a, res %= d;
//         a *= a;
//         a %= d;
//         b /= 2;
//     }
//     return res;
// }

// int modinv(int n, int d)
// {
//     return powr(n, d - 2);
// }

// void solve()
// {
//     int n, x, y;
//     cin >> n >> x >> y;

//     vector<int> v(n);
//     for (int i = 0; i < n; i++)
//     {
//         /* code */
//         cin >> v[i];
//     }

//     map<pair<int, int>, int> mp;
//     int ans = 0;

//     for (int i = n - 1; i >= 0; i--)
//     {
//         int m1 = v[i] % x;
//         int m2 = v[i] % y;

//         int m1t;
//         // int m2t;
//         if (m1 == 0)
//         {
//             m1t = 0;
//         }

//         else
//         {
//             m1t = x - m1;
//         }

//         // for m2 search must be equal to m2 therefore no cases i.e. we want m2

//         ans += mp[{m1t, m2}];
//         mp[{m1, m2}]++;
//     }

//     cout<<ans<<endl;
// }

// int32_t main()
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
//         solve();
//     }
//     return 0;
// }

#include<bits/stdc++.h>
using namespace std;
#define int long long int
const int d = 1e9 + 7;
int powr(int a, int b) {
    int res = 1;
    while (b) {
    if (b & 1) res *= a, res %= d;
    a *= a; a %= d;
    b /= 2;
    }
    return res;
}

int  modinv(int  n, int  d)
{
 return powr(n, d - 2);
}

int32_t main()
{
ios_base::sync_with_stdio(false);
cin.tie(NULL);
cout.tie(NULL);
 
#ifndef ONLINE_JUDGE
freopen("input.txt","r",stdin);
freopen("output.txt","w",stdout);
#endif
    
    
    return 0;
}