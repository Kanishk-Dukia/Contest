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
        string s;
        cin >> s;
        string main = "FBFFBFFB";
 
        for (int i = 0; i < 4; i++)
        {
            main += main;
        }
        int k = main.find(s);
        
        if (k == -1)
        {
            cout << "no" << endl;
        }
        else
        {
            cout << "yes" << endl;
        }
    }
    return 0;
}

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
//         string a, b;
//         cin >> a >> b;
//         int ann = a.size();

//         int bnn = b.size();
//         if (a[0] == b[0])
//         {
//             cout << "YES" << endl;
//             cout << a[0] << "*" << endl;
//         }

//         else if (a[ann - 1] == b[bnn - 1])
//         {
//             cout << "YES" << endl;
//             cout << "*" << a[ann - 1] << endl;
//         }

//         else
//         {

//             string s;
//             bool ok = 0;
//             for (int i = 0; i < ann - 1; i++)
//             {
//                 s.push_back(a[i]);
//                 s.push_back(a[i + 1]);

//                 if (b.find(s) != -1)
//                 {
//                     ok = 1;
//                     break;
//                 }
//                 s.pop_back();
//                 s.pop_back();
//             }

//             if (ok == 0)
//             {
//                 cout << "NO" << endl;
//             }

//             else{
//                 cout<<"YES"<<endl;
//                 cout<<"*"<<s<<"*"<<endl;
//             }
//         }
//     }
//     return 0;
// }