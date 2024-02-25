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
//     string s;
//     cin >> s;

//     int cnta = 0;
//     int cntb = 0;

//     for (int i = 0; i < s.size(); i++)
//     {
//         if (s[i] == 'A')
//         {
//             cnta++;
//         }

//         else
//         {
//             cntb++;
//         }
//     }

//     if (cnta > cntb)
//     {
//         cout << "A" << endl;
//     }

//     else
//     {
//         cout << "B" << endl;
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

//     int cnt1 = 0;
//     int prevcnt = 0;

//     int ok = 0;

//     for (int i = 0; i < n; i++)
//     {
//         for (int j = 0; j < n; j++)
//         {
//             char x;
//             cin >> x;

//             if (x == '1')
//             {
//                 cnt1++;
//             }

//             // cout<<cnt1;
//         }

//         if (cnt1 && prevcnt == 0)
//         {
//             prevcnt = cnt1;
//             cnt1 = 0;
//             continue;
//         }

//         if (prevcnt && ok == 0)
//         {
//             if (prevcnt == cnt1)
//             {
//                 ok = 1;
//             }

//             else
//             {
//                 ok = 2;
//             }
//         }
//     }

//     if (ok == 1)
//     {
//         cout << "SQUARE" << endl;
//     }

//     else
//     {
//         cout << "TRIANGLE" << endl;
//     }
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

// vector<int> v(2 * 1e5);

// int f(int nm)
// {
//     int sum = 0;
//     while (nm)
//     {
//         int temp = nm % 10;
//         sum += temp;
//         nm /= 10;
//     }

//     return sum;
// }

// void solve()
// {
//     int n;
//     cin >> n;

//     cout << v[n] << endl;
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

//     v[1] = f(1);

//     for (int i = 2; i <= 2 * 1e5; i++)
//     {
//         v[i] = f(i) + v[i - 1];
//     }

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
    map<int, int> mp;

    for (int i = 0; i < n; i++)
    {
        cin >> v[i];
        mp[v[i]]++;
    }

    int allone = 2147483647;

    int ans = 0;

    for (int i = 0; i < n; i++)
    {
        if (mp[v[i]])
        {
            int opp = v[i] ^ allone;
            if (mp[opp])
            {
                mp[opp]--;
            }
            mp[v[i]]--;
            ans++;
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