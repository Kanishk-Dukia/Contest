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
//         int n;
//         cin>>n;

//         if(n<7){
//             cout<<"yes"<<endl;
//         }

//         else{
//             cout<<"no"<<endl;
//         }
//     }
//     return 0;
// }

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
//         int n,x;

//         cin>>n>>x;

//         if(x>(n-x)){
//             cout<<n-x<<endl;
//         }

//         else if((n-x)>x){
//             cout<<x<<endl;
//         }

//         else{
//             cout<<x<<endl;
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

//     int t;
//     cin >> t;

//     while (t--)
//     {
//         int a, b, x;

//         cin >> a >> b >> x;

//         if (a == b)
//         {
//             cout << "yes" << endl;
//         }
//         else
//         {
//             if (abs(a - b) % (2 * x) == 0)
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
//         ll l, k;
//         cin >> l >> k;

//         if (l == k)
//         {
//             cout << 0 << endl;
//         }

//         else
//         {

//             // ll divi = l % k;

//             // vector<ll> v;

//             // for (ll i = 0; i < k; i++)
//             // {
//             //     v.push_back(divi) ;
//             //     l -= divi;
//             //     divi += 1;
//             //     if (l <= 0)
//             //     {
//             //         l = l + v[i];
//             //         v[i] = l;
//             //     }
//             // }

//             cout<<1<<endl;

//             // sort(v.begin(),v.end());
//             // ll sum = 0;
//             // for (ll i = 0; i < k - 1; i++)
//             // {
//             //     sum += abs(v[i] - v[i + 1]);
//             // }

//             // cout << sum << endl;

//         }
//     }
//     return 0;
// }

#include <bits/stdc++.h>
using namespace std;
#define ll long long int

int main()
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

        if (n <= 3)
        {
            cout << -1;
        }

        else if(n==4){
            cout<<"3 1 4 2";
        }

        else if(n==5){
            cout<<"3 1 5 2 4";
        }

        else if (n % 2 != 0)
        {
            int d = n / 2;
            int count = 1;
            cout << n << " ";
            for (int i = 1; i < n; i++)
            {
                if (i % 2 != 0)
                {
                    cout << count << " ";
                    count++;
                }

                else
                {
                    cout << d +1 << " ";
                    d++;
                }
            }
        }

        else
        {
            int d = n/2;
            int count = 1;
            for (int i = 1; i <= n; i++)
            {
                if (i % 2 != 0)
                {
                    cout << count << " ";
                    count++;

                }
                else
                {
                    cout << d +1<<" ";
                    d++;
                }
            }
        }

        cout << endl;
    }
    return 0;
}