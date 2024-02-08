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
//     int n, k;
//     cin >> n >> k;

//     string s;
//     cin >> s;

//     bool ok = 0;
//     string tt = "";
//     for (int i = 0; i < n; i++)
//     {

//         if ((s[i] - '0') >= k)
//         {
//             tt += s[i];
//         }
//         else
//         {
//             if (ok == 0)
//             {
//                 ok = 1;
//                 tt += (char)(k + '0');
//             }
//             tt += s[i];
//         }
//     }

//     if (ok == 0)
//     {
//         tt += (char)(k + '0');
//     }

//     cout << tt << endl;

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
//     int n, X1, Y1, X2, Y2;
//     cin >> n >> X1 >> Y1 >> X2 >> Y2;

//     X1--, Y1--, X2--, Y2--;

//     int ft1 = min(min(X1, n - X1 - 1), min(Y1, n - Y1 - 1));

//     int ft2 = min(min(X2, n - X2 - 1), min(Y2, n - Y2 - 1));

//     int result = abs(ft1 - ft2);
//     cout << result << endl;
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
    int n;
    cin >> n;

    vector<int> v(n);

    for (int i = 0; i < n; i++)
    {
        cin >> v[i];
    }

    if (v[0] >= v[n - 1])
    {
        reverse(v.begin(), v.end());
        vector<int> ans(n + 1);

        for (int i = 0; i < n; i++)
        {
            
        }
    }

    else
    {
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