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

//     ll t;
//     cin>>t;

//     while(t--){
//         ll n;
//         cin>>n;

//         if(n == 6){
//             cout<<0<<endl;
//         }

//         else{
//             ll r = n/3;
//             cout<<r-2<<endl;
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

    ll t;
    cin >> t;

    while (t--)
    {
        ll n;
        cin >> n;

        vector<ll> v(n);

        for (ll i = 0; i < n; i++)
        {
            cin >> v[i];
        }

        ll mini = v[0];
        ll k = 0;
        ll count = 0;

        while (k < n)
        {
            if (v[k] < 2 * mini)
            {
                k++;
                continue;
            }

            else
            {  
               count= count + ceil((float)v[k]/((2*mini)-1)-1);
               k++;
            }

            
        }

        cout << count << endl;
    }
    return 0;
}