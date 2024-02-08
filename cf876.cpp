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

//     int cnt = 0;

//     int prev = 0;

//     // for (int i = 1; i <= n; i++)
//     // {
//     //     int temp = ceil((float)i / k);
//     //     if (prev != temp)
//     //     {
//     //         cnt++;
//     //         prev = temp;
//     //     }
//     // }

//     if (k > 1)
//     {
//         if (n % k != 1)
//         {
//             cnt = n + k - 1;
//             cnt = cnt / k;
//             cnt += 1;
//             // cout<<"f";
//         }

//         else
//         {
//             cnt = n + k - 1;
//             cnt /= k;
//             // cout<<"fds";
//         }
//     }

//     else
//     {
//         cnt = n + k - 1;
//         cnt /= k;
//         // cout<<"fdsf";
//     }

//     cout << cnt << endl;
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

// void solve()
// {

//     int n;
//     cin >> n;

//     vector<vector<int>> v(n + 1);

//     for (int i = 0; i < n; i++)
//     {
//         int x, y;
//         cin >> x;
//         cin >> y;

//         v[x].push_back(y);
//     }

//     int ans = 0;

//     for (int i = 1; i <= n; i++)
//     {
//         sort(v[i].begin(), v[i].end(), greater<int>());

//         int temp = v[i].size();

//         int k = min(temp, i);

//         for (int j = 0; j < k; j++)
//         {
//             ans+=v[i][j];
//         }
//     }

//     cout << ans << endl;
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
    vector<int> v(n);

    for (int i = 0; i < n; i++)
    {
        cin >> v[i];
    }

    if (v[n - 1] != 0)
    {
        cout << "NO" << endl;
        return;
    }

    else
    {

        vector<int> res;
        int temp = 0;
        for (int i = n - 1; i >= 0; i--)
        {

            if (v[i - 1] ^ temp)
            {
                res.push_back(i);
                temp = temp ^ 1;
                continue;
            }

            res.push_back(i - 1);
            temp = temp ^ 1;
        }

        reverse(res.begin(), res.end());

        cout << "YES" << endl;
        for (auto &value : res)
        {
            cout << value << " ";
        }

        cout << endl;
    }
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