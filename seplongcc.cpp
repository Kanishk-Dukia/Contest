// #include<bits/stdc++.h>
// using namespace std;

// int main()
// {
//     int t;
//     cin>>t;

//     while(t--){
//         int n,m,x;
//         cin>>n>>m>>x;

//         cout<<2*x*(n+m)<<endl;
//     }
//     return 0;
// }

// #include<bits/stdc++.h>
// using namespace std;

// int main()
// {
//     int t;
//     cin>>t;

//     while(t--){
//         int w,x,y,z;
//         cin>>w>>x>>y>>z;

//         int d = x*z;
//         int r = y*z;

//         cout<<(w+d-r)<<endl;
//     }
//     return 0;
// }

// #include<bits/stdc++.h>
// using namespace std;

// int main()
// {
//     int t;
//     cin>>t;

//     while(t--){
//         int a,b,x,y;
//         cin>>a>>b>>x>>y;

//         float sa = ((float)a/x);
//         float sb = ((float)b/y);

//         if(sa>sb){

//             cout<<"alice"<<endl;
//         }

//         else if(sa==sb){
//             cout<<"equal"<<endl;
//         }

//         else
//         cout<<"bob"<<endl;

//     }
//     return 0;
// }

// #include <bits/stdc++.h>
// using namespace std;
// #define ll long long int

// int main()
// {
//     ll t;
//     cin >> t;

//     while (t--)
//     {
//         ll n;
//         cin >> n;

//         ll a[n];

//         unordered_map<ll, ll> m(n);

//         for (ll i = 0; i < n; i++)
//         {
//            cin>>a[i];
//            m[a[i]]++;
//         }

//         bool ok = 0;
//         ll sum = 0;
//         for (auto &value : m)
//         {
//             if (value.second == 1)
//             {
//                 continue;
//             }

//             else
//             {
//                 ll k = value.second;
//                 ll result = ((k * (k - 1)) / 2);
//                 sum+= result;
//                 ok = 1;
//             }
//         }

//         if(ok == 0)
//         cout<<0<<endl;

//         else
//         cout<<sum<<endl;
//     }
//     return 0;
// }

// #include <bits/stdc++.h>
// using namespace std;
// #define ll long long int

// int main()
// {
//     ll t;
//     cin >> t;

//     while (t--)
//     {
//         ll n;
//         cin >> n;
//         ll a[n];

//         vector<ll> v1;
//         vector<ll> v2;

//         for (ll i = 0; i < n; i++)
//         {
//             cin >> a[i];

//             if (a[i] >= 0)
//             {
//                 ll x = a[i];
//                 v1.push_back(x);
//             }

//             else
//             {
//                 ll y = a[i];
//                 v2.push_back(y);
//             }
//         }

//         if (v2.empty())
//         {
//             ll minimum = *min_element(v1.begin(), v1.end());
//             ll maximum = *max_element(v1.begin(), v1.end());
//             cout << minimum * minimum << " " << maximum * maximum << endl;
//         }

//         else if (v1.empty())
//         {
//             ll nminimum = *min_element(v2.begin(), v2.end());
//             ll maximum = *max_element(v2.begin(), v2.end());
//             cout<<maximum*maximum<<" "<<nminimum*nminimum<<endl;
//         }

//         else
//         {

//             ll maximum = *max_element(v1.begin(), v1.end());
//             ll nminimum = *min_element(v2.begin(), v2.end());

//             if (abs(nminimum) >= maximum)
//             {
//                 cout << maximum * nminimum << " " << nminimum * nminimum << endl;
//             }

//             else
//             {
//                 cout << maximum * nminimum << " " << maximum * maximum << endl;
//             }
//         }
//     }
//     return 0;
// }

#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;

    while (t--)
    {
        int n;
        cin >> n;

        int a[n];
        int b[n];

        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
        }

        for (int i = 0; i < n; i++)
        {
            cin >> b[i];
        }

        int s[n] = {0};

        for (int i = 0; i < n; i++)
        {
            for (int j = 0; j < n; j++)
            {
                if (a[i] > a[j] || b[i] > b[j])
                {
                    s[i]++;
                }

                else if (a[i] < a[j] && a[i] < b[j])
                {
                    s[i] = -1;
                    break;
                }
            }
        }

        int x = 1;
        sort(s, s + n);
        for (int i = n - 2; i >= 0; i--)
        {
            if (s[i] == s[n - 1])
            {
                x++;
            }
        }

        cout << x << endl;
    }
    return 0;
}
