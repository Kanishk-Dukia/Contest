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

//     bool ok = 1;
//     int cnt = 0;

//     vector<int> v(n);

//     int cntzero = 0;
//     for (int i = 0; i < n; i++)
//     {
//         cin >> v[i];
//         if (v[i] == 0)
//         {
//             cntzero++;
//         }
//     }

//     int beze = 0;

//     for (int i = 0; i < n; i++)
//     {
//         if (v[i] == 1)
//         {
//             break;
//         }

//         else
//         {
//             beze++;
//         }
//     }

//     for (int i = n - 1; i >= 0; i--)
//     {
//         if (v[i] == 1)
//         {
//             break;
//         }

//         else
//         {
//             beze++;
//         }
//     }

//     cout << cntzero - beze << endl;
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
//     int n, k;
//     cin >> n >> k;

//     vector<int> ht(n);
//     vector<int> crd(n);

//     for (int i = 0; i < n; i++)
//     {
//         cin >> ht[i];
//     }

//     for (int i = 0; i < n; i++)
//     {
//         int x;
//         cin >> x;

//         x = abs(x);

//         crd[i] = x;
//     }

//     map<int, int> mp;

//     for (int i = 0; i < n; i++)
//     {
//         if (mp[crd[i]])
//         {
//             mp[crd[i]] += ht[i];
//         }

//         else
//         {
//             mp[crd[i]] = ht[i];
//         }
//     }

//     int wst = 0;

//     for (auto it : mp)
//     {
//         int temp = it.first;
//         int bult = temp * k;
//         bult -= wst;

//         if (bult >= it.second)
//         {
//             wst += it.second;
//         }

//         else
//         {
//             cout << "NO" << endl;
//             return;
//         }
//     }

//     cout << "YES" << endl;

//     // for (auto it : mp)
//     // {
//     //     cout << it.first << it.second;
//     // }
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
    int n, q;
    cin >> n >> q;

    vector<int> v(n);
    int cnto = 0;
    for (int i = 0; i < n; i++)
    {
        cin >> v[i];
    }

    vector<int> so(n);

    if (v[0] == 1)
    {
        so[0] = 1;
    }

    else
    {
        so[0] = 0;
    }

    for (int i = 1; i < n; i++)
    {
        if (v[i] == 1)
        {
            so[i] = so[i - 1] + 1;
        }

        else
        {
            so[i] = so[i - 1];
        }
    }

    vector<int> suex(n);

    suex[0] = v[0] - 1;

    for (int i = 1; i < n; i++)
    {
        int temp = v[i] - 1;
        suex[i] = suex[i - 1] + temp;
    }

    while (q--)
    {
        int l, r;
        cin >> l >> r;

        l--;
        r--;

        if (l == r)
        {
            cout << "NO" << endl;
            continue;
        }

        if (l == 0)
        {
            int cnt1 = so[r];
            int extr = suex[r];

            if (extr >= cnt1)
            {
                cout << "YES" << endl;
            }

            else
            {
                cout << "NO" << endl;
            }
        }

        else
        {
            int cnt1 = so[r] - so[l - 1];
            int extr = suex[r] - suex[l - 1];

            if (extr >= cnt1)
            {
                cout << "YES" << endl;
            }

            else
            {
                cout << "NO" << endl;
            }
        }
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