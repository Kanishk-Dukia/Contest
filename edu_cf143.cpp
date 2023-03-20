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
//         int n, m;
//         cin >> n >> m;

//         string s1, s2;
//         cin >> s1 >> s2;

//         reverse(s2.begin(), s2.end());

//         s1 = s1 + s2;

//         bool ok = 1;

//         int count = 0;

//         for (int i = 0; i < n+m-1; i++)
//         {
//             if (s1[i] == s1[i + 1])
//             {
//                 count++;
//             }
//         }

//         if (count > 1)
//         {
//             cout << "NO" << endl;
//         }

//         else
//         {
//             cout << "YES" << endl;
//         }
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
        int n, k;
        cin >> n >> k;

        int bg = 0, e = 0;
        for (int i = 0; i < n; i++)
        {
            int le, rg;
            cin >> le >> rg;
            if (le == k )
            {
                bg++;
            }

            if (rg == k)
            {
                e++;
            }
        }
        if (bg > 0 && e > 0)
        {
            cout << "yes" << endl;
        }

        else
        {
            cout << "no" << endl;
        }
    }
    return 0;
}