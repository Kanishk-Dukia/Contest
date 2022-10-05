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
//         int h;
//         cin>>h;

//         if(h>=67 && h<=45000){
//             cout<<"YES"<<endl;
//         }

//         else{
//             cout<<"NO"<<endl;
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
//         int x,y,z;
//         cin>>x>>y>>z;

//         int max = x>y? (x>z?x:z):(y>z?y:z);

//         if(max == x)
//         cout<<"setter"<<endl;

//         else if(max == y)
//         cout<<"tester"<<endl;

//         else
//         cout<<"Editorialist"<<endl;
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
//         string s;
//         cin>>s;

//         int count = 0;
//         bool ok =0;

//         for(int i = 0;i<s.size();i++){
//             if(s[i] == 'a' || s[i] == 'e' ||s[i] == 'i' ||s[i] == 'o' ||s[i] == 'u' ){
//                 count++;
//                 if(count>2){
//                     ok =1;
//                     break;
//                 }
//             }

//             else{
//                     count = 0;
//                 }
//         }

//         if(ok){
//             cout<<"Happy"<<endl;
//         }
//         else{
//             cout<<"Sad"<<endl;
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

//         string s;
//         cin >> s;
//         // string T ="/0";
//         string T = "";

//         int k;
//         n--;

//         while (k <= n)
//         {
//             if (s[k] == '0')
//                 T = s[k] + T;
//             else
//                 T += s[k];

//             if (k < n)
//             {
//                 if(s[n] == '1'){
//                 T = s[n]+T;
//             }
//                 else
//                 T+=s[n];

//                 n--;
//             }
//             k++;

//         }

//         cout<<T<<endl;

//     }
// return 0;
// }

// #include <bits/stdc++.h>
// using namespace std;
// #define ll long long int

// int main()
// {
//     ios_base::sync_with_stdio(false);
//     cin.tie(NULL);
//     cout.tie(NULL);

//     ll t;
//     cin >> t;

//     while (t--)
//     {
//         ll n;
//         cin >> n;

//         vector<ll> v(n);

//         for (ll i = 0; i < n; i++)
//         {
//             cin >> v[i];
//         }

//         ll maxi = v[0];
//         ll max_index = 0;

//         for(int i =1;i<n;i++){
//             if(v[i] > maxi){
//                 maxi = v[i];
//                 max_index = i;
//                 break;
//             }
//         }

//         if (maxi == v[0])
//         {
//             cout << -1 << endl;
//         }

//         else
//         {
//             ll max2_Index = upper_bound(v.begin(), v.end(), v[0]) - v.begin() + 1;
//             cout << n - (max2_Index - 1) << endl;
//             for (ll i = 0; i < max2_Index - 1; i++)
//             {
//                 cout << v[i] << " ";
//             }
//             cout << endl;
//             cout << v.size() - max2_Index + 1 << endl;
//             for (ll j = max2_Index - 1; j < v.size(); j++)
//             {
//                 cout << v[j] << " ";
//             }
//             cout << endl;
//         }
//     }
//     return 0;
// }

// #include<bits/stdc++.h>
// using namespace std;
// #define ll long long int

// int main(){
// ios_base::sync_with_stdio(false);
// cin.tie(NULL);
// cout.tie(NULL);

// #ifndef ONLINE_JUDGE
//     freopen("input.txt", "r", stdin);
//     freopen("output.txt", "w", stdout);
// #endif

// int t;
// cin>>t;

// while(t--){
//     ll n;
//     cin>>n;

//     vector<ll>v(n);

//     for(ll i=0;i<n;i++){
//         cin>>v[i];
//     }

//     ll min_INDEX=0;

//     for(ll i=1;i<n;i++){
//         if(v[i]>v[0]){
//             min_INDEX=i;
//             break;
//         }
//     }

//     if(min_INDEX==0){
//         cout<<-1<<endl;
//     } else{
//         cout<<min_INDEX<<endl;

//         for(ll k=0;k<min_INDEX;k++){
//             cout<<v[k]<<" ";
//         }
//         cout<<endl;

//         cout<<n-min_INDEX<<endl;
//         for(ll j=min_INDEX;j<n;j++){
//             cout<<v[j]<<" ";
//         }
//         cout<<endl;

//     }

// }
// return 0;
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

    while (t--)
    {
        ll n;
        cin >> n;

        vector<ll> v(n);

        for (ll i = 0; i < n; i++)
        {
            cin >> v[i];
        }

        int maxi = v[0];
        int maxi_i = 0;
        
        for (int i = 1; i < n; i++)
        {
            if(v[i]>maxi){
                maxi = v[i];
                maxi_i = i;
                break;
            }
        }

        if (maxi == v[0])
        {
            cout << -1 << endl;
        }

        else
        {
            // ll max2_Index = upper_bound(v.begin(), v.end(), v[0]) - v.begin() + 1;

            cout << maxi_i<< endl;
            for (ll i = 0; i < maxi_i; i++)
            {
                cout << v[i] << " ";
            }
            cout << endl;
            cout << v.size() - maxi_i << endl;
            for (ll j = maxi_i ; j < v.size(); j++)
            {
                cout << v[j] << " ";
            }
            cout << endl;
        }
    }
    return 0;
}