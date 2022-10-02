// #include<bits/stdc++.h>
// using namespace std;
// #define ll long long int

// int main()
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
//         int n,m;
//         cin>>n>>m;

//         if(n == 1 || m==1){
//             cout<<n<<" "<<m<<endl;
//         }

//         else if(n<=2 && m<=2){
//             cout<<n<<" "<<m<<endl;
//         }

//         else{
//             cout<<n-1<<" "<<m-1<<endl;
//         }

//     }
//     return 0;
// }

// #include <bits/stdc++.h>
// using namespace std;
// #define ll long long int

// int main()
// {
//     ios_base::sync_with_stdio(false);
//     cin.tie(NULL);
//     cout.tie(NULL);

// #ifndef ONLINE_JUDGE
//     freopen("input.txt", "r", stdin);
//     freopen("output.txt", "w", stdout);
// #endif

//     ll t;
//     cin >> t;

//     while (t--)
//     {
//         ll n;
//         cin >> n;

//         ll a[n];

//         for (ll i = 0; i < n; i++)
//         {
//             cin >> a[i];
//         }

//         ll count1 = 0;
//         ll count2 = 0;

//         ll k = a[0];

//         for (ll i = 0; i < n; i++)
//         {
//             if (a[i] >= k || a[i] == 0)
//             {
//                 count1++;
//                 k = a[i];
//             }

//             else
//             {
//                 break;
//             }
//         }

//         if (count1 == n)
//         {
//             // cout << a[0] << " ";
//             ll sum = 0;
//             for (ll i = 0; i < n; i++)
//             {
//                 sum += a[i];
//                 cout << sum << " ";
//             }
//         }

//         else
//         {
//             k = a[0];
//             for (ll i = 0; i < n; i++)
//             {
//                 if (a[i] <= k || a[i] == 0)
//                 {
//                     count2++;
//                     if (a[i] == 0)
//                     {
//                         continue;
//                     }
//                     else
//                         k = a[i];
//                 }

//                 else
//                 {
//                     break;
//                 }
//             }

//             if (count2 == n)
//             {
//                 // cout << a[0] << " ";
//                 ll sum = 0;
//                 for (ll i = 0; i < n; i++)
//                 {
//                     sum += a[i];
//                     cout << sum << " ";
//                 }
//             }

//             else
//             {
//                 cout << -1;
//             }

//         }
//             cout << endl;
//     }
//         return 0;
// }

// #include <bits/stdc++.h>
// using namespace std;
// #define ll long long int

// int main()
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

//         int a[n];
//         int d[n];

//         for (int i = 0; i < n; i++)
//         {
//             cin >> d[i];
//         }

//         a[0] = d[0];
//         bool ok =0;

//         for (int i = 1; i < n; i++)
//         {
//             if (a[i - 1] + d[i] != a[i - 1] - d[i] && a[i - 1] + d[i] > 0 && a[i - 1] - d[i] > 0)
//             {
//                 cout<<-1<<endl;
//                 ok = 1;
//                 break;

//             }

//             a[i] = a[i-1]+d[i];
//         }

//         if(ok == 0){
//            for (int i = 0; i < n; i++)
//            {
//             /* code */
//             cout<<a[i]<<" ";
//            }
//            cout<<endl;
           
//         }
//     }
//     return 0;
// }