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
//     int a,b,c;

//     cin>>a>>b>>c;

//     float extra = abs(a-b);
//     extra = (float)extra/2;

//     float mini = (float)extra/c;

//     int ans = ceil(mini);

//     cout<<ans<<endl;
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

// #include <bits/stdc++.h>
// using namespace std;
// #define int long long int
// const int d = 1e9 + 7;

// void solve()
// {
//     int n;
//     cin >> n;

//     int extra= INT_MAX;

//     for (int i = 1; i <= n; i++)
//     {
//         int d, s;
//         cin >> d >> s;
//         if(d == 1){
//             int temp = s;
//             temp = temp/2;
//             extra = min(extra,1+temp);

//         }

//         else{
//             int temp = s-1;
//             temp = temp/2;
//             extra = min(extra,d+temp);
//         }
//     }

//     cout<<extra<<endl;

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

//     int l, r;
//     cin >> l >> r;

//     int num = 0;

//     for (int i = l; i <= r; i++)
//     {
//         for (int j = 2; j <= sqrt(i); j++)
//         {
//             if (i % j == 0)
//             {
//                 num = i;
//                 break;
//             }
//         }

//         if (num != 0)
//         {
//             break;
//         }
//     }

//     if (num == 0)
//     {
//         cout << -1 << endl;
//         return;
//     }

//     int ans = -1;

//     for (int i = 2; i <= (num / 2) + 1; i++)
//     {
//         if (__gcd(i, num - i) != 1)
//         {
//             ans = i;
//             break;
//         }
//     }

//     cout << ans << " " << num - ans << endl;
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

int modinv(int n, int d)
{
    return powr(n, d - 2);
}

void solve()
{

    int n, x, y;
    cin >> n >> x >> y;

    int cntx = n / x;
    int cnty = n / y;
    int cntc;

    int lcm = (x * y) / __gcd(x, y);

    cntc = n / lcm;

    int rem = n - cntx;
    int sumt = (n * (n + 1)) / 2;
    int sumrem = (rem * (rem + 1)) / 2;
    int sumx = sumt - sumrem;
    // cout << sumx << endl;

    cnty -= cntc;
    // cout << cnty << endl;

    cntx = cntx - cntc;
    rem = n - cntx;
    // cout << rem << endl;
    sumrem = (rem * (rem + 1)) / 2;
    sumrem = sumt - sumrem;
    int sumy = sumx - sumrem;

    // cout << sumy << endl;

    int temp = (cnty * (cnty + 1)) / 2;
    sumy += temp;

    cout << sumx - sumy << endl;
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