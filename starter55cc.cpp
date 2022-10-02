// #include<bits/stdc++.h>
// using namespace std;

// lli main()
// {
//     lli t;
//     cin>>t;
//     while(t--){
//         int x;
//         cin>>x;

//         if(x>98){
//             cout<<"YES"<<endl;
//         }

//         else
//         cout<<"NO"<<endl;
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
//         int x,y;
//         cin>>x>>y;

//         if(x>y){
//             cout<<"new phone"<<endl;
//         }

//         else if(x == y){
//             cout<<"any"<<endl;
//         }

//         else
//         cout<<"repair"<<endl;

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
//         int bl, b;
//         cin >> bl >> b;

//         if (bl < b)
//         {
//             cout << "no" << endl;
//         }

//         else if (bl == b & bl == 1)
//         {
//             cout << "yes" << endl;
//         }

//         else if (bl == b)
//         {
//             cout << "no" << endl;
//         }

//         else
//         {
//             int sum = 0;
//             for (int i = 1; i <= b; i++)
//             {
//                 sum += i;
//             }

//             if (bl >= sum)
//             {
//                 cout << "yes" << endl;
//             }

//             else
//                 cout << "no" << endl;
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

//         int k;
//         cin >> k;

//         int a[k];
//         unordered_map<int, int> m;
//         for (int i = 0; i < k; i++)
//         {
//             cin >> a[i];
//             m[a[i]]++;
//         }

//         int l;
//         cin >> l;
//         int b[l];
//         for (int i = 0; i < l; i++)
//         {
//             cin >> b[i];
//             m[b[i]]++;
//         }

//         vector<int> v;
//         for (auto &value : m)
//         {
//             if (value.second == 1)
//             {
//                 v.push_back(value.first);
//             }
//         }

//         for (int i = v.size() - 1; i >= 0; i--)
//         {
//             cout << v[i] << " ";
//         }
//         cout << endl;
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
//         int n, k, a;
//         cin >> n;
//         vector<int> v(n);
//         unordered_map<int, int> mp;
//         for (int i = 0; i < n; i++)
//         {
//             cin >> v[i];
//         }
//         cin >> k;
//         for (int i = 0; i < k; i++)
//         {
//             cin >> a;
//             mp[a]++;
//         }
//         for (int i = 0; i < n; i++)
//         {
//             if (mp[v[i]] == 0)
//             {
//                 cout << v[i] << " ";
//             }
//         }
//         cout << endl;
//     }
// }