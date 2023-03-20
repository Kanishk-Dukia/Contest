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
//         int n;
//         cin >> n;

//         vector<int> v;

//         for (int i = 0; i < n; i++)
//         {
//             int x;
//             cin >> x;

//             if (x >= 0)
//             {
//                 v.push_back(x);
//             }
//         }

//         sort(v.begin(), v.end());

//         int count = 0;
//         int res;

//         for (auto &value : v)
//         {
//             res = value;
//             break;
//         }

//         if (res == 0)
//         {
//             cout << -1 << endl;
//         }

//         else
//         {
//             cout << res - 1 << endl;
//         }
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
//         int a, b;
//         cin >> a >> b;

//         int GCDvalue = __gcd(a, b);
//         int main = (GCDvalue * a) / __gcd(GCDvalue, a);
//         int sub = __gcd(GCDvalue, b);

//         cout << main - sub << endl;
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
//         int n;
//         cin >> n;

//         int countt = 0;

//         for (int i = 0; i < n; i++)
//         {
//             int a;
//             cin >> a;
//             if (a == 0)
//             {
//                 countt++;
//             }
//         }

//         if (countt % 2 == 0)
//         {
//             cout << "yes" << endl;
//         }

//         else
//         {
//             cout << "no" << endl;
//         }

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

// int checker(int mid, vector<int> &v)
// {
//     bool ok = 1;
//     int n = v.size();
//     for (int i = 0; i < n; i++)
//     {
//         if (v[i] <= mid && v[i] >= (-1 * mid))
//         {
//             ok = 0;
//         }
//     }
//     return ok;
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
//         int n;
//         cin >> n;

//         vector<int> v(n);

//         for (int i = 0; i < n; i++)
//         {
//             cin >> v[i];
//         }

//         int lower = 0;
//         int higher = 1000000000;
//         int result = -1;

//         while (lower <= higher)
//         {
//             int mid = (lower + higher) / 2;

//             if (checker(mid, v))
//             {
//                 lower = mid + 1;
//                 result = mid;
//             }
//             else
//             {
//                 higher = mid - 1;
//             }
//         }

//         cout << result << endl;
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
        int n;
        cin >> n;

        int a[n];

        map<int, int> mp1;
        map<int, int> mp2;

        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
            mp1[a[i]]++;
        }

        int result[n + 1] = {'0'};
        
        for (int i = n - 1; i >= 0; i--)
        {
            result[i] = result[i + 1];
            result[i] += mp1[a[i] + 1];
            result[i] -= mp2[a[i] - 1];
            mp1[a[i]]--;
            mp2[a[i]]++;
        }
        int final = 0;
        
        for (int i = 0; i < n; i++)
        {
            final = max(final, result[i]);
        }
        cout << final << endl;
    }

    return 0;
}

