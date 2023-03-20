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
//         int x,y,z;

//         cin>>x>>y>>z;

//         int res  = min(x,min(y,z));

//         if(res== x){
//             cout<<"Alice"<<endl;
//         }

//         else if(res == y){
//             cout<<"Bob"<<endl;
//         }

//         else {
//             cout<<"Charlie"<<endl;
//         }

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
//         int x,y,z;

//         cin>>x>>y>>z;

//         int sum= x+y+z;

//         if(sum>=6){
//             cout<<"YES"<<endl;
//         }

//         else{
//             cout<<"NO"<<endl;
//         }
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
//         cin>>n;

//         string s;
//         cin>>s;

//         int count1 = 0,count0 = 0;

//         for(int i = 0;i<n;i++)
//         {
//             if (s[i] == '0')
//             {
//                 count0++;
//                 continue;
//             }

//                 count1++;
//         }

//         count0+=1;

//         int res = min(count0,count1);

//         cout << res << endl;
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
//         int n, x;
//         cin >> n >> x;

//         vector<int> v(n);
//         int remsum = 0;

//         for (int i = 0; i < n; i++)
//         {
//             cin >> v[i];
//             remsum += v[i] % 2;
//         }

//         if (!(x % 2) && !remsum)
//         {
//             cout << -1 << endl;
//         }

//         else if ((x & 1) &&  remsum == n )
//         {
//             cout << 0 << endl;
//         }

//         else
//         {
//             if (!(x % 2))
//             {
//                 cout << n - remsum << endl;
//             }

//             else
//             {
//                 int result = (n - remsum );
//                 result+=1;
//                 result/=2;
//                 cout << result << endl;
//             }
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

//         for (int i = 0; i < n; i++)
//         {
//             if (!(i & 1))
//             {
//                 cout << 0 << ' ';
//                 continue;
//             }

//             cout << 1 << ' ';
//         }

//         cout << endl;
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

//         if (!(n & 1))
//         {
//             cout << 0 << ' ';

//             for (int i = 1; i < n; i++)
//             {
//                 if (!(i & 1))
//                 {
//                     cout << 69 << ' ';
//                     continue;
//                 }

//                 cout << -69 << ' ';
//             }

//             cout << endl;
//         }
//         else
//         {
//             cout << -1 << endl;
//         }
//     }
//     return 0;
// }