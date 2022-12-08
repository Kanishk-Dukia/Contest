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

//     while(t--)
//     {

//         int a[3];
//         for (int i = 0; i < 3; i++)
//         {
//             cin >> a[i];
//         }

//         sort(a, a + 3);

//         cout << a[1] << endl;
//     }

//     return 0;
// }

// #include<bits/stdc++.h>
// using namespace std;
// #define int long long int
// const int d = 1e9 + 7;

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

//         sort(s.begin(),s.end());

//         int k = s[n-1] - 'a'+1;
//         cout<<k<<endl;

//     }

//     return 0;
// }

// #include<bits/stdc++.h>
// using namespace std;
// #define int long long int
// const int d = 1e9 + 7;

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

//         vector<int> v(n);
//         vector<int> v1(n);

//         for(int i = 0;i<n;i++){
//             cin>>v[i];
//             v1[i] = v[i];
//         }

//         sort(v1.begin(),v1.end());

//         int max1 = v1[n-1];
//         int max2 = v1[n-2];

//         for(int i = 0;i<n;i++){
//             if(v[i] == max1){
//                 v[i] = v[1] - max2;
//             }

//             else{
//                 v[i] = v[i] - max1;
//             }
//         }

//         for(int i = 0;i<n;i++){
//             cout<<v[i]<<" ";
//         }

//         cout<<endl;
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
//         int n;
//         cin >> n;

//         vector<int> v(n);

//         for (int i = 0; i < n; i++)
//         {
//             cin >> v[i];
//         }

//         bool ok = 1;
//         int i = 0;

//         while (i < n - 1 && ok)
//         {

//             if (v[i] < v[i + 1])
//             {
//                 ok = 0;

//                 while (v[i + 1] >= v[i] && i < n - 1)
//                 {
//                     i++;
//                 }

//                 if (i == n - 1)
//                 {
//                     cout << "YES" << endl;
                    
//                 }

//                 else
//                 {
//                     cout << "NO" << endl;
//                 }
//             }

//             i++;
//         }
//         if (ok)
//         {
//             cout << "YES" << endl;
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
        int n;
        cin>>n;

        vector<int> v(n+1);
        int count0 = 0;
        v[0] = -1;
        for(int i = 1;i<n+1;i++){
            cin>>v[i];
            if(v[i] == 0){
                count0++;
            }


            
        }

        if(count0 == 0 || count0 == n){
            cout<<n-1<<endl;
            
        }

        else{
        int countt0 = count0;
        int sum1 = 0;
        for(int i = 1;i<n+1;i++){
            if(v[i] == 1){
               sum1 = sum1 + 1*countt0;
            }

            else{
               countt0--;
            }
        }
        

        countt0 = count0;
        int sum2 = 0;
        int store0;

        for(int i = 1;i<n+1;i++){
            if(v[i] == 0 ){
                v[i] = 1;
                store0 = i;
                countt0--;
                break;
            }
        }

        for(int i = 1;i<n+1 ;i++){

            if(v[i] == 1 ){
                sum2 = sum2 + 1*countt0;
            }

            else if(v[i] == 0 ){
                countt0--;
            }
        }

        v[store0] = 0;

        countt0 = count0;
        for(int i = n;i>0;i--){
            if(v[i] == 1 ){
                v[i] = 0;
                countt0++;
                break;
            }
        }


        int sum3 = 0;
        for(int i = 1;i<n+1;i++){
            if(v[i] == 1){
                sum3 = sum3 + 1*countt0;
            }

            else{
                countt0--;
            }
        }
        int k = max(sum1,max(sum2,sum3));
        cout<<k<<endl;
        }

    }
    return 0;
}