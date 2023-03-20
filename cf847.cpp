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
//         string p = "314159265358979323846264338327";
//         string s;
//         cin >> s;
//         int count = 0;

//         for (int i = 0; i < 30; i++)
//         {
//             if (p[i] == s[i])
//             {
//                 count++;
//             }
//             else
//             {
//                 break;
//             }
//         }

//         cout << count << endl;
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
//         int n, r, s;
//         cin >> n >> s >> r;

//         int pick = s - r;
//         int rem = r - n + 1;

//         vector<int> v(n, 1);

//         v[0] = pick;

//         pick-=1;

//         for (int i = 1; i < n; i++)
//         {

//             v[i] += min(pick ,rem);
//             rem -= min(pick ,rem );
//         }

//         for (int  i = 0;i<n;i++)
//         {
//             cout << v[i] << " ";
//         }

//         cout << endl;
//     }

//     return 0;
// }

// #include<bits/stdc++.h>
// using namespace std;
// #define int long long int
// const int d = 1e9 + 7;
// int powr(int a, int b) {
//     int res = 1;
//     while (b) {
//     if (b & 1) res *= a, res %= d;
//     a *= a; a %= d;
//     b /= 2;
//     }
//     return res;
// }

// int  modinv(int  n, int  d)
// {
//  return powr(n, d - 2);
// }

// int32_t main()
// {
// ios_base::sync_with_stdio(false);
// cin.tie(NULL);
// cout.tie(NULL);

// #ifndef ONLINE_JUDGE
// freopen("input.txt","r",stdin);
// freopen("output.txt","w",stdout);
// #endif

//     int t;
//     cin>>t;

//     while(t--){
//         int n;
//         cin >> n;
//         vector<vector<int>> v(n, vector<int>(n - 1));
//         vector<map<int, int>> m(n - 1);
//         l(i, 0, n)
//         {
//             l(j, 0, n - 1)
//             {
//                 cin >> v[i][j];
//                 m[j][v[i][j]]++;
//             }
//         }
//         vi ans(n);
//         int maxi = 0;
//         int num = 0;
//         int mini = infinity;
//         int num2 = 0;
//         for (auto &j : m[0])
//         {
//             if (j.second > maxi)
//             {
//                 maxi = j.second;
//                 num = j.first;
//             }
//             if (j.second < mini)
//             {
//                 mini = j.second;
//                 num2 = j.first;
//             }
//         }
//         ans[0] = num;
//         l(i, 1, n - 1)
//         {
//             ans[i] = num2;
//             for (auto &j : m[i])
//             {
//                 if (j.first != num2)
//                 {
//                     num2 = j.first;
//                     break;
//                 }
//             }
//         }

//         ans[n - 1] = num2;
//         for (auto &i : ans)
//         {
//             cout << i << " ";
//         }
//         cout << endl;
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

        vector<int> arr(n);
        for (int i = 0; i < n; i++)
        {
            cin >> arr[i];
        }
        map<int, int> cnt;
        for (int i = 0; i < n; i++)
        {
            cnt[arr[i]]++;
        }


        int ans = 0,
            last = 0, running = 0;
        for (auto [i, j] : cnt)
        {
            if (i == last + 1)
            {
                if (j >= running)
                {
                    ans += j - running;
                    running = j;
                }
                else
                    running = j;
                last++;
            }
            else
            {
                running = j;
                ans += j;
                last = i;
            }
        }
        cout << ans << endl;
    }
    return 0;
}