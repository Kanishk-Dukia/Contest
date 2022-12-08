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
//         string s;
//         cin>>s;

//         string s1 = s;

//         reverse(s1.begin(),s1.end());

//         s = s+s1;

//         cout<<s<<endl;
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

//         if (n % 2 != 0)
//         {
//             for (int i = 0; i < n; i++)
//             {
//                 cout << n << " ";
//             }
//             cout << endl;
//         }

//         else
//         {
//             for (int j = 0; j <= n - 3; j++)
//             {
//                 cout << 2 << " ";
//             }
//             cout << 3 << " " << 1 << " ";
//             cout << endl;
//         }
//     }
//         return 0;
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

bool is_prime(int n)
{
    for (int i = 2; i <= sqrt(n); i++)
    {
        if (n % i == 0)
        {
            return false;
        }
    }

    return true;
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
        int n, m;
        cin >> n >> m;

        if (is_prime(n) && m != n)
        {
            cout << -1 << endl;
        }

        else if (m == n)
        {
            cout << m << " ";
            for (int i = 2; i < n; i++)
            {
                cout << i << " ";
            }
            cout << 1 << endl;
        }
        else
        {

            vector<int> v(n + 1, 0);

            if (__gcd(m, n) == m)
            {

                v[1] = m;
                for (int i = 2; i < n; i++)
                {
                    if (i == m)
                    {
                        v[i] = n;
                        continue;
                    }
                    v[i] = i;
                }

                for (int i = 2; i < n; i++)
                {
                    if (v[m] % i == 0)
                    {
                        if (v[i] % m == 0)
                        {
                            swap(v[m], v[i]);
                            m = i;
                        }
                    }
                }

                v[n] = 1;

                for(int i= 1;i<=n;i++){
                    cout<<v[i]<<" ";
                }

                cout << endl;
            }

            else
            {
                cout << -1 << endl;
            }
        }
    }
    return 0;
}