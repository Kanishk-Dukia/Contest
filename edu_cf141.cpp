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

//         vector<int> a(n);

//         for (int i = 0; i < n; i++)
//         {
//             cin >> a[i];
//         }

//         sort(a.begin(), a.end(), greater<int>());

//         if (a[0] == a[n - 1])
//         {
//             cout << "NO" << endl;
//         }

//         else
//         {
//             cout << "YES" << endl;

//             if (a[0] == a[1])
//             {
//                 swap(a[1], a[n - 1]);
//                 for (int i = 0; i < n; i++)
//                 {
//                     cout << a[i] << " ";
//                 }
//             }

//             else
//             {
//                 for (int i = 0; i < n; i++)
//                 {
//                     cout << a[i] << " ";
//                 }
//             }

//             cout << endl;
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

        vector<int> v(n * n);

        int s = 1;
        int l = n * n;

        for (int i = 0; i < n*n; i++)
        {
            if (i % 2 == 0)
            {
                v[i] = s;
                s++;
            }

            else
            {
                v[i] = l;
                l--;
            }
        }


        int a[n][n];
        int count = 0;

        for (int i = 0; i < n; i++)
        {
            if (i % 2 == 0)
            {

                for (int j = 0; j < n; j++)
                {
                    a[i][j] = v[count];
                    count++;
                }
            }
            else
            {
                for (int j = n - 1; j >= 0; j--)
                {
                    a[i][j] = v[count];
                    count++;
                }
            }
        }

        for (int i = 0; i < n; i++)
        {
            for (int j = 0; j < n; j++)
            {
                cout << a[i][j] << " ";
            }
            cout << endl;
        }
    }
    return 0;
}