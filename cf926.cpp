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

//     vector<int> v(n);

//     for(int i = 0;i<n;i++){
//         cin>>v[i];
//     }

//     sort(v.begin(),v.end());

//     int sum = 0;

//     for(int i = 1 ;i<n;i++){
//         sum += (v[i] - v[i-1]);
//     }

//     cout<<sum<<endl;
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

// void solve()
// {
//     int n, k;
//     cin >> n >> k;

//     int temp = 2 * n;

//     int ans = 0;

//     if (k > temp)
//     {
//         ans += n;
//         k = k - temp;

//         if (k % 2)
//         {
//             ans += 1;
//             k -= 1;
//             k = k / 2;
//             ans += k;
//         }

//         else
//         {
//             if (k == (2 * (n - 2) + 2))
//             {
//                 k = k / 2;
//                 ans += k;
//                 ans += 1;
//             }

//             else
//             {
//                 k = k / 2;
//                 ans += k;
//             }
//         }
//     }

//     else
//     {
//         if (k % 2)
//         {
//             ans += 1;
//             k -= 1;
//             k = k / 2;
//             ans += k;
//         }

//         else
//         {
//             k = k / 2;
//             ans += k;
//         }
//     }

//     cout<<ans<<endl;
// }

// int modinv(int n, int d)
// {
//     return powr(n, d - 2);
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
    int k, x, a;
    cin >> k >> x >> a;

    int ta = a;
    int tx = x;

    bool ok = 0;
    int mstu = 0;

    for (int i = a; i >= 0 && tx; i -= mstu)
    {
        mstu = (a - i);
        int temp = k - 1;
        mstu /= temp;
        mstu += 1;
        tx--;
        ta-=mstu;
    }

    if (ta)
    {
        ta = ta * k;

        if (ta > a)
        {
            ok = 1;
        }
    }

    if (ok)
    {
        cout << "YES" << endl;
    }

    else
    {
        cout << "NO" << endl;
    }
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