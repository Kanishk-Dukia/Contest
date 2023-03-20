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

//         int a[n];

//         for (int i = 0; i < n; i++)
//         {
//             cin >> a[i];
//         }

//         int counter = 0;

//         for (int i = 0; i < n; i++)
//         {
//             if (a[i] == 1)
//             {
//                 counter++;
//             }
//         }

//         if (counter > 1)
//         {
//             cout << n - (counter / 2) << endl;
//         }

//         else
//         {
//             cout << n << endl;
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
        int a1, a2, a3, a4;
        cin >> a1 >> a2 >> a3 >> a4;

        if ((a1 + a2 + a3 + a4) == 0)
        {

            cout << 0 << endl;
            continue;
        }

        else if (a1 == 0)
        {
            cout << 1 << endl;
            continue;
        }

        else
        {
            int l = a1 - abs(a2-a3);
            int p = a1 + 2 * min(a2, a3) + min(abs(a2-a3), a1);

            if (l > 0)
            {
                if (l < a4)
                {

                    p += l + 1;
                }
                else
                {
                    p += a4;
                }
            }

            else if ((a4 > 0 && l == 0))
            {
                p++;
            }
            else if (l < 0)
            {
                p++;
            }
            cout << p << endl;
        }
    }
    return 0;
}