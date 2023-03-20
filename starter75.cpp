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
//         int a,b,c,d;
//         cin>>a>>b>>c>>d;

//         if(c>b){
//            int k = b-a+1;
//            int l = d-c+1;
//            cout<<k+l<<endl;
//         }

//         else if(a>d){
//             int k = b-a+1;
//            int l = d-c+1;
//            cout<<k+l<<endl;
//         }

//         else if(b==c){
//              int k = b-a+1;
//            int l = d-c+1;
//            cout<<k+l-1<<endl;
//         }

//         else {
//             cout<<max(b,d) - min(a,c)+1<<endl;
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
//         int k;
//         cin >> k;

//         string s;
//         cin >> s;

//         int count = 0, index = -1;

//         for (int i = 0; i < k; i++)
//         {
//             if (s[i] != '0')
//             {
//                 index = i;
//                 count++;
//             }

//             else
//             {
//                 continue;
//             }
//         }

//         if (index != k - 2 && index != k - 1 && count == 1)
//         {
//             cout << "yes" << endl;
//         }

//         else if (count > 1 && count < 4)
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

// int f1[200001];
// int f2[200001];

// int32_t main()
// {
//     ios_base::sync_with_stdio(false);
//     cin.tie(NULL);
//     cout.tie(NULL);

// #ifndef ONLINE_JUDGE
//     freopen("input.txt", "r", stdin);
//     freopen("output.txt", "w", stdout);
// #endif

//     f1[0] = 1, f2[0] = 1;
//     for (int j = 1; j < 200001; j++)
//     {

//         f2[j] = (f2[j - 1] % d * ((powr(j, d - 2)) % d)) % d;
//     }

//     for (int i = 1; i < 200001; i++)
//     {
//         f1[i] = (f1[i - 1] % d * (i%d)) % d;
//     }

    

//     int t;
//     cin >> t;

//     while (t--)
//     {
//         int n;
//         cin >> n;
        
//         string s, st;
//         cin >> s >> st;

//         int count = 0;
//         int result = 1;
//         for (int i = 0; i < n; i++)
//         {
//             if (st[i] == s[i])
//             {
//                 count++;
//             }
//         }

        

//         if ((n - count) & 2 != 1)
//         {
//             cout << 0 << endl;
//         }
//         else
//         {
//             result = powr(2, count) % d;

//             n -= count;
//             result *= ((((f2[n / 2]%d) * (f2[n / 2]%d))%d)*(f1[n]%d))%d;

//             cout << result%d << endl;
//         }
//     }

//     return 0;
// }

