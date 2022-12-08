// #include<bits/stdc++.h>
// using namespace std;
// #define ll long long int

// int main()
// {
// ios_base::sync_with_stdio(false);
// cin.tie(NULL);
// cout.tie(NULL);

//     ll t;
//     cin>>t;
//     ll k = 0;

//     while(t--){
//         ll l,n;
//         cin>>l>>n;

//         vector<pair<ll,char>> v(n);

//         for(ll i = 0;i<n;i++){
//             ll x;
//             cin>>x;
//             char y;
//             cin>>y;
//             v[i].first = x;
//             v[i].second = y;
//         }

//         ll lapc = 0;
//         ll sum = 0;

//         for(auto &value:v){

//             if(value.second == 'C'){
//                 sum+=value.first;

//             }

//             else{
//                 sum-=value.first;

//             }

//             if(abs(sum) >=l){
//                 lapc+=abs(sum/l);
//                 sum = sum%l;

//             }
//         }

//         k++;
//         cout<<"Case "<<"#"<<k<<": "<<lapc<<endl;
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

    ll t;
    cin >> t;
    ll k = 0;
    while (t--)
    {
        int l;
        cin >> l;

        ll result;

        if (l <= 13)
        {
            result = l;
        }


        if (l == 14 || l == 15)
        {
            result = 13;
        }


        if (l == 16 || l == 18)
        {
            result = 14;
        }


        if (l == 19 || l == 20 || l == 17)
        {
            result = 15;
        }

        k++;
        cout << "Case"
             << " "
             << "#" << k << ":"
             << " " << result << endl;
    }

    return 0;
}
