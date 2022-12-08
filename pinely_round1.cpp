// #include <bits/stdc++.h>
// using namespace std;
// #define int long long int
// const int d = 1e9 + 7;

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
//         int n, a, b;
//         cin >> n >> a >> b;

//         if (n == a && a==b)
//         {
//             cout << "YES" << endl;
//         }

//         else
//         {

//             if ((n - a - b) >= 2)
//             {
//                 cout << "YES" << endl;
//             }

//             else
//             {
//                 cout << "NO" << endl;
//             }
//         }
//     }
//         return 0;
// }

#include <bits/stdc++.h>
using namespace std;
#define int long long int
const int d = 1e9 + 7;

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

        vector<int> v(n);
        unordered_map<int, int> m;
        for (int i = 0; i < n; i++)
        {
            cin >> v[i];
            m[v[i]]++;
        }

        if (n == 1)
        {
            cout << 1 << endl;
            continue;
        }

        if (m.size() == 2)
        {
            cout << ((n - 2) / 2) + 2 << endl;
            continue;
        }

        cout << n << endl;
    }
    return 0;
}
