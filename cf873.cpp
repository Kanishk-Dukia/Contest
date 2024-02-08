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

//     if (n % 2)
//     {
//         for (int i = 1; i <= n; i++)
//         {
//             cout << i << " ";
//         }

//         cout << endl;
//     }

//     else
//     {
//         for (int i = 1; i <= n; i++)
//         {
//             cout << 2 * i << " ";
//         }

//         cout<<endl;
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

// void solve()
// {
//     int n;
//     cin >> n;

//     vector<int> v(n);

//     for (int i = 0; i < n; i++)
//     {
//         cin >> v[i];
//     }

//     int res = v[0];
//     // res--;

//     res--;

//     vector<int> pos(n);

//     for (int i = 0; i < n; i++)
//     {
//         pos[i] = abs(v[i] - 1 - i);
//     }

//     for (int k = 0; k < n; k++)
//     {
//         res = __gcd(res, pos[k]);
//     }

//     cout << res << endl;
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

void solve()
{
    int n;
    cin >> n;

    vector<int> a(n);
    vector<int> b(n);

    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }

    for (int i = 0; i < n; i++)
    {
        cin >> b[i];
    }

    sort(a.begin(), a.end());

    sort(b.begin(), b.end());

    int res = 1;
    int y = 0;

    for (int i = n - 1; i >= 0; i--)
    {   
        int grt = upper_bound(a.begin(), a.end(), b[i]) - a.begin();
        // cout<<"grt"<<grt<<endl;
        int temp = grt;
        grt = n;
        grt -= temp;
        // cout<<"y"<<y<<endl;
        res = (res % d * abs(grt - y) % d) % d;
        // cout<<"res"<<res<<endl;
        y++;
    }

    cout << res%d << endl;
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