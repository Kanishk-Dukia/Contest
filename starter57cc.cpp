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

//     int x,y;
//     cin>>x>>y;

//     if(x>=2*y){
//         cout<<"yes"<<endl;
//     }

//     else
//     cout<<"no"<<endl;
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

//     cout<<t-1<<endl;
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

//         int n;
//         cin >> n;

//         // vector<int> p;
//         vector<int> z;
//         vector<int> ne;

//         for (int i = 0; i < n; i++)
//         {
//             int x;
//             cin >> x;

//             if (x == 0)
//             {
//                 z.push_back(x);
//                 break;
//             }

//             else if (x < 0)
//             {
//                 ne.push_back(x);
//             }
//         }

//         if (!z.empty())
//         {
//             cout << 0 << endl;
//         }
//         else if (ne.empty() || ne.size() % 2 == 0)
//         {
//             cout << 0 << endl;
//         }
//         else
//             cout <<  1 << endl;
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
//         int a, b;
//         cin >> a >> b;

//         if (a % 2 != 0 && b % 2 != 0)
//         {
//             cout << "no" << endl;
//         }

//         else if (a == 1 || b == 1)
//         {
//             cout << "no" << endl;
//         }

//         else
//             cout << "yes" << endl;
//     }
//     return 0;
// }

#include<bits/stdc++.h>
using namespace std;
#define ll long long int

int main()
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
        int n;
        cin>>n;

        string s;
        cin>>s;

        if(s.length()<=2){
            cout<<s<<endl;
        }

        else{
            sort(s.begin(),s.end());
            cout<<s<<endl;
        }
    }
    return 0;
}