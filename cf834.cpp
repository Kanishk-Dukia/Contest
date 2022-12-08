// #include <bits/stdc++.h>
// using namespace std;
// #define int long long int
// const int d = 1e9 + 7;

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
//         string s;
//         cin >> s;

//         bool ok = 1;

//         for (int i = 0; i < s.length(); i++)
//         {
//             if (s[i] != 'Y' && s[i] != 'e' && s[i] != 's')
//             {
//                 ok = 0;
//                 break;
//             }

//             if (s[i] == 's' && s[i + 1] == 's' || s[i] == 'e' && s[i + 1] == 'e' || s[i] == 'Y' && s[i + 1] == 'Y')
//             {
//                 ok = 0;
//                 break;
//             }

//             if(s[i] == 's' && s[i+1] == 'e' || s[i] == 'Y' && s[i+1] == 's' || s[i] == 'e' && s[i+1] == 'Y'){
//                 ok = 0;
//                 break;
//             }
//         }

//         if (ok)
//         {
//             cout << "Yes" << endl;
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
//         int m, s;

//         cin >> m >> s;

//         vector<int> v(m);

//         for (int i = 0; i < m; i++)
//         {
//             cin >> v[i];
//         }

//         int sum = accumulate(v.begin(), v.end(), 0ll);
//         int maxi = *max_element(v.begin(), v.end());

//         int summ = 0;
//         for (int i = 0; i <= maxi; i++)
//         {
//             summ += i;
//         }

//         int diff = summ - sum;

//         bool ok = 0;

       

//         int ini = maxi;

//         if (diff == s)
//         {
//             cout << "YES" << endl;
//         }

//         else
//         {     s -= diff;

//             while (ini <= s)
//             {
//                 ini++;
//                 s -= ini;
//                 if (s == 0)
//                 {
//                     ok = 1;
//                     break;
//                 }
//             }

//             if (ok)
//             {
//                 cout << "YES" << endl;
//             }

//             else
//             {
//                 cout << "NO" << endl;
//             }
//         }
//     }
//     return 0;
// }

#include<bits/stdc++.h>
using namespace std;
#define int long long int
const int d = 1e9 + 7;

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
        int l,r,x,a,b;
        cin>>l>>r>>x>>a>>b;

        bool ok = 1;

        if(a == b && ok){
            ok  = 0;
            cout<<0<<endl;
        }

        if(abs(b-a)>=x && ok){
            ok = 0;
            cout<<1<<endl;
        }

        if(((abs(l-a)>=x && abs(l-b)>= x) || (abs(r-a)>=x && abs(r-b)>= x)) && ok){
            ok = 0;
            cout<<2<<endl;
        }

        if(((abs(l-a)>=x && abs(b-r)>= x && abs(r-l)>=x || abs(r-l)>=x && abs(l-b)>=x && abs(a-r)>=x)) && ok){
            ok = 0;
            cout<<3<<endl;
        }

        if(ok){
            cout<<-1<<endl;
        }
    }
    return 0;
}