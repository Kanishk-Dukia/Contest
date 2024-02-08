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

//     vector<pair<int, int>> v(n);

//     for (int i = 0; i < n; i++)
//     {
//         cin >> v[i].first;
//         v[i].second = i;
//     }

//     sort(v.begin(), v.end());

//     vector<int> res(n);

//     for (int i = 0; i < n; i++)
//     {
//         res[v[i].second] = n - i;
//     }

//     for (int i = 0; i < n; i++)
//     {
//         cout << res[i] << " ";
//     }

//     cout << endl;

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

    string s;
    cin >> s;

    int diff = 0;
    int same = 0;

    for (int i = 0; i < n / 2; i++)
    {
        if (s[i] == s[n - 1 - i])
        {
            same++;
        }

        else
        {
            diff++;
        }
    }

    string ans = "";
    if (n % 2)
    {
        same = same * 2 + 1;
        int tot = same + diff;

        for (int i = 0; i <= n; i++)
        {
            if (i >= diff && i <= tot)
            {
                ans.append("1");
            }

            else
            {
                ans.append("0");
            }
        }
    }

    else
    {
        same = same * 2;
        int tot = same + diff;

        for (int i = 0; i <= n; i++)
        {
            if (i >= diff && i <= tot)
            {
                if ((i - diff) % 2)
                {
                    ans.append("0");
                }

                else
                {
                    ans.append("1");
                }
            }

            else
            {
                ans.append("0");
            }
        }
    }

    cout << ans << endl;
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