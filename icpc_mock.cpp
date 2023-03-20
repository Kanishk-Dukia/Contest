// // // // #include <bits/stdc++.h>
// // // // using namespace std;
// // // // #define int long long int
// // // // const int d = 1e9 + 7;
// // // // int powr(int a, int b)
// // // // {
// // // //     int res = 1;
// // // //     while (b)
// // // //     {
// // // //         if (b & 1)
// // // //             res *= a, res %= d;
// // // //         a *= a;
// // // //         a %= d;
// // // //         b /= 2;
// // // //     }
// // // //     return res;
// // // // }

// // // // int modinv(int n, int d)
// // // // {
// // // //     return powr(n, d - 2);
// // // // }

// // // // int32_t main()
// // // // {
// // // //     ios_base::sync_with_stdio(false);
// // // //     cin.tie(NULL);
// // // //     cout.tie(NULL);

// // // // #ifndef ONLINE_JUDGE
// // // //     freopen("input.txt", "r", stdin);
// // // //     freopen("output.txt", "w", stdout);
// // // // #endif

// // // //     int t;
// // // //     cin >> t;

// // // //     while (t--)
// // // //     {
// // // //         int n;
// // // //         cin >> n;

// // // //         string s;
// // // //         cin >> s;

// // // //         vector<int> v(n);
// // // //         for (int i = 0; i < n; i++)
// // // //         {
// // // //             cin >> v[i];
// // // //         }

// // // //         // vector<int> range(n);

// // // //         int maxi = INT32_MIN;
// // // //         int count = 0;
// // // //         bool ok = 1;

// // // //         for (int i = 0; i < s.size(); i++)
// // // //         {

// // // //             if (s[i] == 'R')
// // // //             {
// // // //                 maxi = max(maxi, i + 1 + v[i]);
// // // //             }

// // // //             else if (s[i] == 'B')
// // // //             {
// // // //                 ok = 0;
// // // //                 if (i + 1 <= maxi)
// // // //                 {
// // // //                     count++;
// // // //                 }

// // // //                 else if (i + 1 > maxi)
// // // //                 {
// // // //                     count = -1;
// // // //                     break;
// // // //                 }
// // // //             }
// // // //         }

// // // //         if (ok)
// // // //         {
// // // //             cout << 0 << endl;
// // // //         }

// // // //         else
// // // //         {
// // // //             cout << count << endl;
// // // //         }
// // // //     }
// // // //     return 0;
// // // // }

// // // // #include <bits/stdc++.h>
// // // // using namespace std;
// // // // #define int long long int
// // // // const int d = 1e9 + 7;
// // // // int powr(int a, int b)
// // // // {
// // // //     int res = 1;
// // // //     while (b)
// // // //     {
// // // //         if (b & 1)
// // // //             res *= a, res %= d;
// // // //         a *= a;
// // // //         a %= d;
// // // //         b /= 2;
// // // //     }
// // // //     return res;
// // // // }

// // // // int modinv(int n, int d)
// // // // {
// // // //     return powr(n, d - 2);
// // // // }

// // // // int32_t main()
// // // // {
// // // //     ios_base::sync_with_stdio(false);
// // // //     cin.tie(NULL);
// // // //     cout.tie(NULL);

// // // //     int a;
// // // //     int b;
// // // //     cin >> a >> b;

// // // //     cout << a + b;
// // // //     return 0;
// // // // }

// // // #include<bits/stdc++.h>
// // // using namespace std;
// // // #define int long long int
// // // const int d = 1e9 + 7;
// // // int powr(int a, int b) {
// // //     int res = 1;
// // //     while (b) {
// // //     if (b & 1) res *= a, res %= d;
// // //     a *= a; a %= d;
// // //     b /= 2;
// // //     }
// // //     return res;
// // // }

// // // int  modinv(int  n, int  d)
// // // {
// // // return powr(n, d - 2);
// // // }

// // // int32_t main()
// // // {
// // // ios_base::sync_with_stdio(false);
// // // cin.tie(NULL);
// // // cout.tie(NULL);

// // // #ifndef ONLINE_JUDGE
// // // freopen("input.txt","r",stdin);
// // // freopen("output.txt","w",stdout);
// // // #endif

// // //     int t;
// // //     cin>>t;

// // //     while(t--){
// // //         int n;
// // //         cin>>n;

// // //         vector<int> v(2*n);

// // //         for(int i = 0;i<2*n;i++){
// // //             cin>>v[i];
// // //         }

// // //         sort(v.begin(),v.end());

// // //         int avg = (v[0]+v[2*n-1]);

// // //         bool ok =1;

// // //         for(int i = 1;i<n;i++){
// // //             int temp = v[i]+v[2*n-1-i];

// // //             if(temp == avg){
// // //                 continue;
// // //             }

// // //             else{
// // //                 ok = 0;
// // //                 break;
// // //             }

// // //         }

// // //         if(ok){
// // //             cout<<"PERFECT"<<endl;
// // //         }

// // //         else{
// // //             cout<<"IMBALANCED"<<endl;
// // //         }
// // //     }
// // //     return 0;
// // // }

// // #include<bits/stdc++.h>
// // using namespace std;
// // #define int long long int
// // const int d = 1e9 + 7;
// // int powr(int a, int b) {
// //     int res = 1;
// //     while (b) {
// //     if (b & 1) res *= a, res %= d;
// //     a *= a; a %= d;
// //     b /= 2;
// //     }
// //     return res;
// // }

// // int  modinv(int  n, int  d)
// // {
// //  return powr(n, d - 2);
// // }

// // int32_t main()
// // {
// // ios_base::sync_with_stdio(false);
// // cin.tie(NULL);
// // cout.tie(NULL);

// // #ifndef ONLINE_JUDGE
// // freopen("input.txt","r",stdin);
// // freopen("output.txt","w",stdout);
// // #endif

// //     int t;
// //     cin>>t;

// //     while(t--){
// //         int n,m;
// //         cin>>n>>m;

// //         string s;
// //         cin>>s;

// //         int k = m;

// //         for(int i = m;i<n;i++){
// //                if(s[i] == '#'){
// //                  k--;
// //                }
// //         }

// //         if(k>0){
// //             cout<<"JAY"<<endl;
// //         }

// //         else{
// //             cout<<"JEFF"<<endl;
// //         }
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

//         int a, b;
//         cin >> a >> b;

//         vector
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
//         int a, b;
//         cin >> a >> b;

//         if (a == b)
//         {
//             cout << "YES" << endl;
//         }

//         else
//         {
//             cout << "NO" << endl;
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

        vector<int> v(n);

        for (int i = 0; i < n; i++)
        {
            cin >> v[i];
        }

        int a;
        int b;

        int ans = 0;

        for (int i = 0; i < n - 1; i++)
        {
            a = v[i];
            b = v[i+1];
            if(a>b){
                swap(a,b);
            }

            cout<<a<<b;
            for (int j = i + 1; i < n; j++)
            { 
                int temp = v[j];
                if(temp<=a){
                   b = a;
                   a = temp;
                }

                else if(temp<=b && temp>a){
                    b= temp;
                }

                ans += a ^ b;
            }
        }

        cout << ans << endl;
    }
    return 0;
}