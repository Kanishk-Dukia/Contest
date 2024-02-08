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

// void solve(){
//     int x,k;
//     cin>>x>>k;

//     if(x%k != 0){
//         cout<<1<<endl;
//         cout<<x<<endl;
//         return;
//     }

//     else{

//         int res = 0;

//         for(int i = x;i>=0;i--){
//             if(i%k != 0){
//                res = i;
//                break;
//             }
//         }

//         cout<<2<<endl;

//         cout<<res<<" "<<x-res<<endl;

//         return;
//     }
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
//         solve();
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

// void solve()
// {
//     int n;
//     cin >> n;
//     string s;
//     cin >> s;

//     int contmx = 0;
//     char last = s[0];
//     int temp = 0;

//     for (int i = 1; i < n; i++)
//     {
//         if (s[i] == last)
//         {
//             temp++;
//             continue;
//         }

//         contmx = max(contmx, temp);
//         last = s[i];
//         temp = 0;
//     }

//     contmx = max(contmx, temp);
//     // cout<<cntmx;
//     contmx+=2;

//     cout << contmx << endl;
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
//         solve();
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

// void solve()
// {
//     string s;
//     cin >> s;

//     int cnt = 0;
//     int n = s.length();

//     string ans = "";
//     for (int i = 0; i < n; i++)
//     {
//         if (s[i] == '?')
//         {

//             cnt++;
//             continue;
//         }

//         for (int k = cnt; k >= 0; k--)
//         {
//             if(s[i] == '0'){
//                 ans.push_back('0');
//             }

//             else{
//                 ans.push_back('1');
//             }
//         }
//         cnt = 0;
//     }

//     for (int k = cnt; k > 0; k--)
//     {
//         ans.push_back('1');
//     }

//     // cout<<ans<<endl;

//     cout << ans << endl;
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
//         solve();
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

void solve()
{
    int n;
    cin >> n;
    string s;
    cin >> s;

    int cntrt = 0;
    int cntlt = 0;

    for (int i = 0; i < n; i++)
    {
        if (s[i] == '(')
        {
            cntrt++;
        }
        else
        {
            cntlt++;
        }
    }

    if (cntrt != cntlt)
    {
        cout << "-1" << endl;
        return;
    }

    else
    {

        int crt = 0;
        int clt = 0;
        int counter = 0;

        for (int i = 0; i < n; i++)
        {
            if (s[i] == ')')
            {
                clt++;
            }
            else
            {
                crt++;
            }

            if (clt - crt < 0)
            {
                counter++;
                break;
            }
        }

        crt = 0, clt = 0;

        for (int i = 0; i < n; i++)
        {
            if (s[i] == '(')
            {
                crt++;
            }
            else
            {
                clt++;
            }

            if (crt - clt < 0)
            {
                counter++;
                break;
            }
        }

        if (counter < 2)
        {
            cout << 1 << endl;
            for (int i = 0; i < n; i++)
            {
                cout << 1 << ' ';
            }
            cout << endl;
        }

        else
        {
            vector<int> v(n);
            int i = 0;
            int j = n - 1;
            while (i < j)
            {

                if (s[i] == '(' && s[j] == '(')
                {
                    v[i] = 2;
                    v[j] = 1;
                }
                else if (s[i] == ')' && s[j] == ')')
                {
                    v[i] = 1;
                    v[j] = 2;
                }

                else if (s[i] == ')' && s[j] == '(')
                {
                    v[j] = 1;
                    v[i] = 1;
                }

                else
                {
                    v[i] = 2;
                    v[j] = 2;
                }

                j--;
                i++;
            }

            cout << "2" << endl;
            for (int i = 0; i < n; i++)
            {
                cout << v[i] << " ";
            }
            cout << endl;
        }
    }
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
        solve();
    }
    return 0;
}