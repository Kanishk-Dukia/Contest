// // #include <bits/stdc++.h>
// // using namespace std;
// // #define int long long int
// // const int d = 1e9 + 7;
// // int powr(int a, int b)
// // {
// //     int res = 1;
// //     while (b)
// //     {
// //         if (b & 1)
// //             res *= a, res %= d;
// //         a *= a;
// //         a %= d;
// //         b /= 2;
// //     }
// //     return res;
// // }

// // void solve()
// // {
// //     int n;
// //     cin>>n;
// //     string s;
// //     cin >> s;

// //     map<string,int> m;

// //     for(int i = 0;i<n-1;i++){
// //         string temp = "";
// //         temp+=s[i];
// //         temp+=s[i+1];

// //         m[temp]++;
// //     }

// //     cout<<m.size()<<endl;
// // }

// // int modinv(int n, int d)
// // {
// //     return powr(n, d - 2);
// // }

// // int32_t main()
// // {
// //     ios_base::sync_with_stdio(false);
// //     cin.tie(NULL);
// //     cout.tie(NULL);

// // #ifndef ONLINE_JUDGE
// //     freopen("input.txt", "r", stdin);
// //     freopen("output.txt", "w", stdout);
// // #endif

// //     int t;
// //     cin >> t;

// //     while (t--)
// //     {
// //         solve();
// //     }

// //     return 0;
// // }

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

//     vector<int> a(n);
//     vector<int> b(n);

//     for (int i = 0; i < n; i++)
//     {
//         cin >> a[i];
//     }

//     for (int i = 0; i < n; i++)
//     {
//         cin >> b[i];
//     }

//     sort(b.begin(), b.end());

//     vector<pair<int, int>> vp;

//     for (int i = 0; i < n; i++)
//     {
//         vp.push_back({a[i], i});
//     }

//     vector<int> res(n);

//     sort(vp.begin(), vp.end());

//     for (int i = 0; i < n; i++)
//     {
//         // cout<<vp[i].second;
//         res[vp[i].second] = b[i];
//     }

//     for (int i = 0; i < n; i++)
//     {
//         cout << res[i] << " ";
//     }

//     cout << endl;
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

//     vector<int> v(n);

//     int cnt = 0;

//     for (int i = 0; i < n; i++)
//     {
//         cin >> v[i];

//         if (v[i] % 2)
//         {
//             cnt++;
//         }
//     }

//     int mini = *min_element(v.begin(), v.end());

//     if (mini % 2)
//     {
//         cout << "YES" << endl;
//     }

//     else if (cnt == 0 || cnt == n)
//     {
//         cout << "YES" << endl;
//     }

//     else
//     {
//         cout << "NO" << endl;
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

    int maxi = n;
    int smaxi = n - 1;

    int lt = find(v.begin(), v.end(), maxi) - v.begin() + 1;
    int lts = find(v.begin(), v.end(), smaxi) - v.begin() + 1;

    // cout<<lts;
    // cout<<lt;

    vector<int> res;

    if (lt == 1)
    {
        if (lts == n)
        {
            res.push_back(smaxi);

            for (int i = 0; i < n - 1; i++)
            {
                res.push_back(v[i]);
            }
        }

        else
        {
            for (int i = lts - 1; i < n; i++)
            {
                res.push_back(v[i]);
            }

            res.push_back(v[lts-1-1]);

            for (int i = 0; i < lts - 1-1; i++)
            {
                res.push_back(v[i]);
            }
        }
    }

    else if (lt == n)
    {
        if (v[0] > v[n - 2])
        {
            res.push_back(n);

            for (int i = 0; i < n - 1; i++)
            {
                res.push_back(v[i]);
            }
        }

        else
        {
            res.push_back(n);
            res.push_back(v[n - 2]);

            for (int i = 0; i < n - 2; i++)
            {
                res.push_back(v[i]);
            }
        }
    }

    else
    {
        if (lt == 2)
        {
            for (int i = 1; i < n; i++)
            {
                res.push_back(v[i]);
            }

            res.push_back(v[0]);
        }

        else
        {
            if (v[lt - 1 - 1 - 1] < v[0])
            {
                for (int i = lt - 1; i < n; i++)
                {
                    res.push_back(v[i]);
                }

                res.push_back(v[lt - 1 - 1]);

                for (int i = 0; i < lt - 1 - 1; i++)
                {
                    res.push_back(v[i]);
                }
            }

            else
            {
                for (int i = lt - 1; i < n; i++)
                {
                    res.push_back(v[i]);
                }

                res.push_back(v[lt - 1 - 1]);
                res.push_back(v[lt - 1 - 1 - 1]);

                for (int i = 0; i < lt - 1 - 1 - 1; i++)
                {
                    res.push_back(v[i]);
                }
            }
        }
    }

    for (auto &value : res)
    {
        cout << value << " ";
    }
    cout << endl;
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