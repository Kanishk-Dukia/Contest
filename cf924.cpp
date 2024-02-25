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
//     int a, b;
//     cin >> a >> b;

//     int nsidea;
//     int nsideb;

//     if (a % 2 == 0)
//     {
//         nsidea = 2 * b;

//         if (b != a / 2 && nsidea != a)
//         {
//             cout << "YES" << endl;
//             return;
//         }
//     }

//     if (b % 2 == 0)
//     {
//         nsideb = 2 * a;

//         if (a != b / 2 && nsideb != b)
//         {
//             cout << "YES" << endl;
//             return;
//         }
//     }

//     cout << "NO" << endl;
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
    int n;
    cin >> n;

    vector<int> a;
    unordered_map<int, int> mp;

    for (int i = 0; i < n; i++)
    {
        int x;
        cin >> x;

        if (mp[x])
        {
            continue;
        }
        a.push_back(x);
        mp[x]++;
    }

    sort(a.begin(), a.end());

    vector<int> diff;
    for (int i = 0; i < a.size() - 1; i++)
    {
        diff.push_back({a[i + 1] - a[i]});
    }

    int l = 0, r = 0;
    int ans = 0;
    int s = diff[0];
    while (r < diff.size())
    {
        if (s >= n)
        {
            s -= diff[l];
            l++;
        }
        else
        {
            ans = max(ans, r - l + 1);
            r++;
            if (r < diff.size())
            {
                s += diff[r];
            }
        }
    }
    cout << ans + 1 << endl;
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