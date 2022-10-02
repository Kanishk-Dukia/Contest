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
//         ll n,k;
//         cin>>n>>k;

//         vector<pair<ll,ll>> v(n+1);
//         v[0].first = 0;
//         v[0].second = 0;

//         for(ll i = 1;i<=n;i++){
//             ll x;
//             cin>>x;
//             v[i].first = i%k;
//             v[i].second = x;
//         }

//         sort(v.begin(),v.end());

//         ll sum = 0;
//         ll count = 0;
//         ll maxi= v[0].second;
//         for(auto &value:v){
//             if(value.first == count){
//                 maxi = max(maxi,value.second);
//                 continue;
//             }

//             count++;
//             sum +=maxi;
//             maxi = value.second;

//         }

//         cout<<sum+maxi<<endl;
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
        int n, x, y;
        cin >> n >> x >> y;

        int min = x>=y? y:x;
        int max = x>=y? x:y;

        if (min != 0 || (x == 0 && y == 0))
            cout << -1 << endl;

        else if ((n - 1) % max != 0)
        {
            cout << -1 << endl;
        }

        else
        {
            int i = 1;
          
            while (i < n)
            {
                for (int j = 1; j <= max; j++)
                {
                    cout<<i+1<<" ";
                }

                i+= max;
            }
                cout<<endl;
        }
    }
    return 0;
}