// #include <bits/stdc++.h>
// using namespace std;
// #define int long long int
// const int d = 1e9 + 7;
// int powr(int s, int b)
// {
//     int res = 1;
//     while (b)
//     {
//         if (b & 1)
//             res *= s, res %= d;
//         s *= s;
//         s %= d;
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
//     int n;
//     cin >> n;

//     string s;
//     cin >> s;

//     string k = "";
//     char first = s[0];
//     int count = 1;

//     for (int i = 1; i < n; i++)
//     {
//         if (s[i] == s[i - 1])
//         {
//             count++;
//         }
//         else
//         {

//             if (count % 2)
//             {

//                 k.push_back(first);
//             }
//             else
//             {
//                 k.push_back(first);
//                 k.push_back(first);
//             }
//             first = s[i];
//             count = 1;
//         }
//     }

//     if (count & 1)
//     {
//         k.push_back(first);
//     }
//     else
//     {
//         k.push_back(first);
//         k.push_back(first);
//     }

//     cout << k << endl;
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

