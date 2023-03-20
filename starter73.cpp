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
// //         int n;
// //         cin >> n;

// //         int count = 0;
// //         while (n > 0)
// //         {
// //             int temp = n%10;
// //             if (temp == 7)
// //             {
// //                 count++;
// //                 break;
// //             }
// //             n= n/10;

// //         }

// //         if(count){
// //             cout<<"yes"<<endl;
// //         }

// //         else{
// //             cout<<"no"<<endl;
// //         }
// //     }
// //     return 0;
// // }

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

// int32_t main()
// {
// ios_base::sync_with_stdio(false);
// cin.tie(NULL);
// cout.tie(NULL);

// #ifndef ONLINE_JUDGE
// freopen("input.txt","r",stdin);
// freopen("output.txt","w",stdout);
// #endif

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
//         int n,k;
//         cin>>n>>k;

//         vector<int> v(n);
//         int res = 0;
//         for(int i = 0;i<n;i++){
//             cin>>v[i];
//             res = res | v[i];

//         }

//         int temp = k - res;

//         if((temp & k) == temp){
//             cout<<temp<<endl;
//         }

//         else{
//             cout<<-1<<endl;
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
//         for (int i = 1; i < n; i++)
//         {
//             v[i] ^= v[i - 1];
//             v[i - 1] = 0;
//         }

//         int dcounter = n;

//         for (int i = 0; i < n; i++)
//         {
//             if (v[i])
//                 dcounter--;
//         }

//         if (dcounter == n)
//         {
//             cout << "yes" << endl;
//         }

//         else if (dcounter == n - 1)
//         {
//             if (((n - 1) % 2 ))
//             {
//                 cout << "no" << endl;
//             }

//             else
//             {
//                 cout << "yes" << endl;
//             }
//         }

//         else
//         {
//             cout << "no" << endl;
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
        int X, Y;
        cin >> X >> Y;

        if (X == Y)
        {
            cout << X * 69 << endl;
        }
        else if (X== 1 || Y == 1)
        {
            cout << max(X, Y) - 1 << endl;
        }
        else
        {
            cout << (Y * X) - Y - X << endl;
        }
    }

    return 0;
}