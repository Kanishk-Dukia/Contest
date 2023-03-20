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
//         vector<int> v(n + 1);
//         vector<int> odd, eve;

//         for (int i = 1; i < n + 1; i++)
//         {
//             cin >> v[i];
//             if (v[i] % 2 == 0)
//             {

//                 eve.push_back(i);
//             }
//             else
//             {
//                 odd.push_back(i);
//             }
//         }

//         if (odd.size() >= 3)
//         {

//             cout << "YES" << endl;
//             cout << odd[0] << " " << odd[1] << " " << odd[2] << endl;
//         }

//         else if (odd.size() >= 1 && eve.size() >= 2)

//         {
//             cout << "YES" << endl;
//             cout << eve[0] << " " << eve[1] << " " << odd[0] << endl;
//         }

//         else
//         {

//             cout << "NO" << endl;
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

//         int n;
//         cin >> n;

//         vector<int> v(n);

//         for (int i = 0; i < n; i++)
//         {
//             cin >> v[i];
//         }

//         int sum1 = 0;
//         int sum2 = 0;
//         sum1 = accumulate(v.begin(), v.end(), 0ll);

//         int maximum = 0;

//         for (int i = 0; i < n - 1; i++)
//         {
//             sum2 += v[i];
//             sum1 -= v[i];
//             maximum = max(maximum, __gcd(sum1, sum2));
//         }

//         cout << maximum << endl;
//     }
//     return 0;
// }

#include<bits/stdc++.h>
using namespace std;
#define int long long int
const int d = 1e9 + 7;
int powr(int a, int b) {
    int res = 1;
    while (b) {
    if (b & 1) res *= a, res %= d;
    a *= a; a %= d;
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
freopen("input.txt","r",stdin);
freopen("output.txt","w",stdout);
#endif
 
    
    return 0;
}