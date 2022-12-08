// // #include<bits/stdc++.h>
// // using namespace std;
// // #define int long long int
// // const int d = 1e9 + 7;
// // int powr(int a, int b) {
// //     int res = 1;
// //     while (b) {
// //     if (b & 1) res *= a, res %= d;
// //     a *= a; a %= d;
// //     b /= 2;
// //     }
// //     return res;
// // }

// // int32_t main()
// // {
// // ios_base::sync_with_stdio(false);
// // cin.tie(NULL);
// // cout.tie(NULL);

// // #ifndef ONLINE_JUDGE
// // freopen("input.txt","r",stdin);
// // freopen("output.txt","w",stdout);
// // #endif

// //     int t;
// //     cin>>t;

// //     while(t--){
// //         int a,c;
// //         cin>>a>>c;

// //         if((a+c)%2 == 0){
// //             cout<<(a+c)/2<<endl;
// //         }

// //         else{
// //             cout<<-1<<endl;
// //         }
// //     }
// //     return 0;
// // }

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
//         int n,x;
//         cin>>n>>x;

//         int im = powr(2,x);

//         for(int i = 0 ;i<n;i++){
//             im-= (im/2);
//         }

//         cout<<im<<endl;
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
//         int n, x, c;
//         cin >> n >> x >> c;

//         vector<int> v(n);

//         for (int i = 0; i < n; i++)
//         {
//             cin >> v[i];
//         }

//         int dif = x - c;

//         if (dif == 0)
//         {
//             int sum = accumulate(v.begin(), v.end(), 0ll);
//             cout << sum << endl;
//         }

//         else
//         {
//             sort(v.begin(), v.end());
//             int ix = lower_bound(v.begin(), v.end(), dif) - v.begin();

//             if (ix == 0)
//             {
//                 int sum = accumulate(v.begin(), v.end(), 0ll);
//                 cout << sum << endl;
//             }

//             else{

//                 int sum = 0;
//                 int count = 0;
//                 for(int i = 0;i<ix;i++){
//                     sum+=x;
//                     count+=c;
//                 }

//                 sum = accumulate(v.begin() + ix,v.end(), sum);
//                 cout<<sum-count<<endl;
//             }

//         }
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
        int n;
        cin >> n;

        string s;
        cin >> s;

        vector<string> v;

        int cl = 1;
        string st = "";

        for (int i = 0; i < n; i++)
        {
            if (s[i] == s[i + 1])
            {
                cl++;
                st += s[i];
            }

            else if ((s[i] != s[i + 1]) && cl == 1)
            {
               st +=s[i];
               v.push_back(st);
               st = "";

            }

            else
            {
                st += s[i];
                v.push_back(st);
                st = "";
                cl = 1;
            }
        }

        if(v.empty()){
            cout<<0<<endl;
        }

        else{

        unordered_map<string,int> m;

        for(auto &value : v){
           m[value]++;
        }
        // for (auto &value : m)
        // {
        //     cout << value.first<<" "<<value.second<<endl;
        // }

        int mls  = INT32_MIN;
        for(auto &value : m){
            if(value.second>1){
                string k = value.first;
                int x = k.length();
                mls = max(mls,x);
            }

            else{
                string k = value.first;
                int x = k.length();
                mls = max(mls,x-1);
            }
        }

        cout<<mls<<endl;
        }
    }
    return 0;
}

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
//         int n;
//         cin>>n;

//         string s;
//         cin>>s;

//         map<pair<char,int>,int> m ;

//         char c = s[0];
//         int l = 1;
//         m[{c,l}]++;

//         for(int i = 1;i<n;i++){
//             if(c!=s[i]){
//                 l = 1;
//                 c = s[i];
//                 m[{c,l}]++;
//             }

//             else{
//                 l++;
//                 m[{c,l}]++;
//             }
//         }

//         int mls = INT32_MIN;

//         for(auto &value: m){
//             if(value.second==1){
//                 mls = max(mls,value.first.second-1);
//             }

//             else{
//                 mls = max(mls,value.first.second);
//             }
//         }

//         cout<<mls<<endl;

//     }
//     return 0;
// }

// #include <bits/stdc++.h>
// #define int long long int
// using namespace std;
// const int d = 998244353;

// int32_t main()
// {
// #ifndef ONLINE_JUDGE
//     freopen("input.txt", "r", stdin);
//     freopen("output.txt", "w", stdout);
// #endif
//     int t;
//     cin >> t;
//     while (t--)
//     {
//         int N;
//         cin >> N;
//         int arr[N];
//         vector<int> vec1;
//         vector<int> vec2;
//         int prod = 1;
//         int count = 0;
//         for (int i = 0; i < N; i++)
//         {
//             cin >> arr[i];
//             if (arr[i] % 2 == 0)
//             {
//                 vec1.push_back(arr[i]);
//             }
//             else
//             {
//                 vec2.push_back(arr[i]);
//             }
//         }

//         sort(vec1.begin(), vec1.end());

//         if (vec1.empty() || vec2.empty())
//         {
//             if (vec1.empty())
//             {
//                 for (int i = 0; i < vec2.size(); i++)
//                 {
//                     prod = ((prod%d)*(vec2[i]%d))% d;
//                 }
//                 cout << prod % 998244353  << endl;
//             }

//             else
//             {
//                 for (int i = 0; i < vec1.size(); i++)
//                 {
//                     prod = ((prod%d)*(vec1[i]%d))% d;
//                 }
//                 cout << prod % 998244353 << endl;
//             }
//         }

//         else
//         {

//             for (int i = 0; i < vec2.size(); i++)
//             {
//                 if (vec2[i] == 1)
//                 {
//                     count++;
//                 }
//                 prod = ((prod%d)*(vec2[i]%d))% d;
//             }

//             for (int i = 0; i < count && i < vec1.size(); i++)
//             {
//                 vec1[i] = vec1[i] + 1;
//             }

//             for (int i = 0; i < vec1.size(); i++)
//             {
//                 prod = ((prod%d)*(vec1[i]%d))% d;
//             }

//             cout << prod % 998244353 << endl;
//         }
//     }
// }