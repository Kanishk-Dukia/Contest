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

//     string a, b, c;

//     cin >> a >> b >> c;

//     int count = 0;

//     for (int i = 0; i < n; i++)
//     {
//         if (c[i] == a[i] || c[i] == b[i])
//         {
//             count++;
//         }
//     }

//     if (count == n)
//     {
//         cout << "NO" << endl;
//     }

//     else
//     {
//         cout << "YES" << endl;
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

//     map<int, int> mp;

//     for (int i = 0; i < n; i++)
//     {
//         int x;
//         cin >> x;
//         mp[x]++;
//     }

//     if(n<3){
//         cout<<0<<endl;
//         return;
//     }

//     int temp = 0;
//     int ans = (((n ) * (n - 1)) * (n - 2));
//     ans /= 6;

//     for (auto &value : mp)
//     {
//         if (temp <= 1)
//         {
//             temp += value.second;
//             continue;
//         }

//         int k = ((temp) * (temp - 1));
//         k /= 2;

//         ans = ans - (k * value.second);
//         temp += value.second;
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

    vector<int> mn(n);
    for (int i = 0; i < n; i++)
    {
        cin >> mn[i];
    }

    vector<int> st(n - 1), ed(n - 1);

    st[0] = 1;
    ed[0] = 1;

    for (int i = 1; i < n - 1; i++)
    {
        int temp1 = mn[i + 1] - mn[i];
        int temp2 = mn[i] - mn[i - 1];

        if (temp1 < temp2)
        {
            st[i] = st[i - 1] + 1;
        }

        else
        {
            st[i] = st[i - 1] + temp1;
        }
    }

    for (int i = 1; i < n - 1; i++)
    {
        int temp1 = mn[n - i] - mn[n - i - 1];
        int temp2 = mn[n - i - 1] - mn[n - i - 2];

        if (temp1 < temp2)
        {
            ed[i] = ed[i - 1] + temp2;
        }

        else
        {
            ed[i] = ed[i - 1] + 1;
        }
    }

    int k;
    cin >> k;

    while (k--)
    {
        int s, d;
        cin >> s >> d;

        if (s == d)
        {
            cout << 0 << endl;
        }

        else if (d > s)
        {
            if (s == 1)
            {
                cout << st[d - 1 - 1] << endl;
            }

            else
            {
                cout << st[d - 2] - st[s - 2] << endl;
            }
        }

        else
        {
            if (s == n)
            {
                cout << ed[n - d - 1] << endl;
            }

            else
            {
                cout << ed[n - d - 1] - ed[n - s - 1] << endl;
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