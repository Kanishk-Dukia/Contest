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

//     string s;
//     cin >> s;

//     int n = s.size();

//     unordered_map<char, int> m;

//     for (int i = 0; i < n/2; i++)
//     {
//         m[s[i]]++;
//     }

//         if (m.size()>= 2)
//         {
//             cout << "YES" << endl;
//         }

//         else
//         {
//             cout << "NO" << endl;
//         }

// }

// int modinv(int n, int d)
// {
//     return powr(n, d - 2);
// }

// int32_t main()
// {
//     ios_base::sync_with_stdio(false);
//     cin.tie(NUint);
//     cout.tie(NUint);

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
    int n, k;
    cin >> n >> k;

    vector<int> v(n);

    for (int i = 0; i < n; i++)
    {
        cin >> v[i];
    }

    int ed, subf = 0, ct = 0;

    sort(v.begin(), v.end());
    for (int i = n - 1; i >= 0; i--)
    {
        ct++;
        subf = subf + v[i];

        if (k <= ct)
        {
            ed = i;
            break;
        }
    }
    int sum = accumulate(v.begin(), v.end(), 0ll);

    int rem = sum;

    rem -= subf;
    int bg = 0, diff = 0;
    while (k--)
    {
        subf = subf - v[ed] + v[bg] + v[bg + 1];
        diff = sum - subf;
        rem = max(diff, rem);
        ed++, bg += 2;
    }

    cout << rem << endl;
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
