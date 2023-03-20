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
//         int w, d, h;
//         cin >> w >> d >> h;

//         int a, b, f, g;
//         cin >> a >> b >> f >> g;

//         int k = b + h + g + abs(a - f);
//         int l = abs(d - b) + h + abs(d - g) + abs(a - f);
//         int m = a + h + f + abs(b - g);
//         int n = abs(w - a) + h + abs(w - f) + abs(b - g);

//         int res = min(min(k,l),min(m,n));
//         cout<<res<<endl;

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
//         map<int, int> m;

//         for (int i = 0; i < n; i++)
//         {
//             cin >> v[i];
//         }

//         sort(v.begin(), v.end());

//         for (int i = 0; i < n; i++)
//         {
//             m[v[i]]++;
//         }

//         int result = 0;

//         if (m[0] == 0)
//         {
//             result = 2;
//         }

//         else
//         {
//             result = 1;
//         }

//         for (int i = 0; i < n - 1; i++)
//         {
//             if (v[i + 1] >= i + 2 && v[i] < i + 1  )
//             {
//                 result++;
//             }
//         }

//         cout << result << endl;
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