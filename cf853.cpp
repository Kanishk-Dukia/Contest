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
//         int n;
//         cin >> n;

//         vector<int> v(n);

//         for (int i = 0; i < n; i++)
//         {
//             cin >> v[i];
//         }

//         int maxi = INT16_MAX;
//         for (int i = 0; i < n; i++)
//         {
//             for (int j = i + 1; j < n; j++)
//             {
//                 maxi = min(__gcd(v[i], v[j]), maxi);
//             }
//         }

//         if (maxi < 3)
//         {
//             cout << "yes" << endl;
//         }

//         else
//         {
//             cout << "no" << endl;
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
//         int n;
//         cin >> n;
//         string s;
//         cin >> s;

//         string temp = s;
//         reverse(temp.begin(), temp.end());
//         if (s == temp)
//         {
//             cout << "yes" << endl;
//             continue;
//         }

//         else
//         {
//             int start = 0;
//             int end = n - 1;
//             int counter = 0;

//             while (start < end && start < n && end >= 0)
//             {
//                 while (s[start] == s[end] && start < end && start < n && end >= 0)
//                 {
//                     start++;
//                     end--;
//                 }
//                 counter++;
//                 while (s[start] != s[end] && start < end && start < n && end >= 0)
//                 {
//                     start++;
//                     end--;
//                 }

//                 while (s[start] == s[end] && start < end && start < n && end >= 0)
//                 {
//                     start++;
//                     end--;
//                 }
//             }

//             if (counter == 1)
//             {
//                 cout << "yes" << endl;
//             }
//             else
//             {
//                 cout << "no" << endl;
//             }
//         }
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

int  modinv(int  n, int  d)
{
 return powr(n, d - 2);
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
 
    int t;
    cin>>t;

    while(t--){
        int n,m;
        cin>>n>>m;

        vector<int> v(n+1);

        for(int i  = 1;i<n+1;i++){
            cin>>v[i];
        }

        unordered_map<int,int> mp;

        for(int i = 1;i<=n;i++){
            mp[v[i]]++;
        }

        while(m--){
            int p,ch;
            cin>>p>>ch;
            
            
            v[p] = ch;
            mp[v[p]]++;
        }


    }
    return 0;
}
