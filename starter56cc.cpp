// #include<bits/stdc++.h>
// using namespace std;

// int main()
// {
//     int t;
//     cin>>t;

//     while(t--){
//         bool ok1,ok2,ok3,ok4;
//         cin>>ok1>>ok2>>ok3>>ok4;
//         if(!ok1 and !ok2 and !ok3 and !ok4){
//             cout<<"in"<<endl;
//         }

//         else
//         cout<<"out"<<endl;
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
//         int s;
//         cin>>s;

//         if(s<51){
//             cout<<"left"<<endl;
//         }

//         else
//         cout<<"right"<<endl;

//     }
//     return 0;
// }

// #include<bits/stdc++.h>
// using namespace std;
// #define ll long long int

// int main()
// {
//     ll t;
//     cin>>t;

//     while(t--){
//         ll n;
//         cin>>n;

//         ll max ;
//         cin>>max;

//         ll a[n];

//         for(ll i = 0;i<n;i++){
//             cin>>a[i];
//         }

//         ll b[n];

//         for(ll i = 0;i<n;i++){
//             ll m = abs(1-a[i]) >= abs(max - a[i]) ?  1:max;
//             b[i] = m;
//         }

//          ll sum = 0;
//         for(ll j = 0;j<n;j++){
//              sum+= abs(a[j] - b[j]);
//         }

//         cout<<sum<<endl;
//     }
//     return 0;
// }

// #include <bits/stdc++.h>
// using namespace std;

// int main()
// {
//     int t;
//     cin >> t;

//     while (t--)
//     {
//         int r, g, b;
//         cin >> r >> g >> b;

//         int sum = r + g + b;

//         if (r == 0 || g == 0 || b == 0)
//         {
//             if (sum == 0)
//             {
//                 cout << 0 << endl;
//             }

//             else if (sum == 1)
//             {
//                 cout << 1 << endl;
//             }

//             else if (sum == 2)
//             {

//                 if (sum % 2)
//                 {
//                     cout << 1 << endl;
//                 }

//                 else
//                     cout << 2 << endl;
//             }

//             else if (sum == 3)
//             {
//                 if (r == 1 and g == 1 and b == 1)
//                 {
//                     cout << 3 << endl;
//                 }

//                 else
//                     cout << 2 << endl;
//             }

//             else
//                 cout << 3 << endl;
//         }

//     }
//     return 0;
// }

// #include <bits/stdc++.h>
// using namespace std;

// int main()
// {
//     int t;
//     cin >> t;

//     while (t--)
//     {
//         int r, g, b;

//         cin >> r >> g >> b;
//         int sum = r + g + b;
//         int srg = r + g;
//         int sgb = g + b;
//         int sbr = b + r;

//         if (sum == 0)
//         {
//             cout << 0 << endl;
//         }

//         else if (srg == 0 || sgb == 0 || sbr == 0)
//         {
//             cout << 1 << endl;
//         }

//         else if (r == 0 || g == 0 || b == 0)
//         {
//             if (r == 1 || g == 1 || b == 1)
//             {
//                 cout << 2 << endl;
//             }

//             else
//             {
//                 cout << 3 << endl;
//             }
//         }

//         else if(r == 1 &&g==1&&b==1){
//             cout<<3<<endl;
//         }

//         else if (r == 2 && g == 2 && b == 2)
//         {
//             cout << 4 << endl;
//         }

//         else if (r >= 3 && g >= 3 && b >= 3)
//         {
//             cout << 6 << endl;
//         }

//         else if(r==1 || g==1 ||b==1){
//             if(srg == 2 || sgb == 2 || sbr == 2){
//                 cout<<3<<endl;
//             }
//             else{
//                 cout<<4<<endl;
//             }
//         }
//         else
//         {
//             cout << 5 << endl;
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
        int n, k;
        cin >> n >> k;

        vector<int> v;
        int mg = 0;
        for (int i = 0; i < n; i++)
        {
            int x;
            cin >> x;
            mg = __gcd(mg, x);
            v.push_back(x);
        }

        int sg = 0;
        int count = 0;
        for (int i = 0; i < n; i++)
        {
            sg = __gcd(sg, v[i]);
            if (sg == mg)
            {
                count++;
                sg = 0;
            }
        }

        if (count >= k)
        {
            cout << "yes" << endl;
        }

        else
        {
            cout << "no" << endl;
        }

       
    }
    return 0;
}