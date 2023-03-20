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

//         cout<<n-1<<endl;
//     }
//     return 0;
// }

// #include <bits/stdc++.h>
// using namespace std;
// #define int long long int

// int quick_sort(int *a, int low, int high, int &count)
// {
//     if (low < high)
//     {
//         count++;
//         int pivot = a[low];
//         int lb = low;
//         int ub = high;

//         while (lb <= ub)
//         {
//             while ((a[lb] <= pivot) && (lb <= high))
//                 lb++;

//             while ((a[ub] > pivot) && (ub >= low))
//                 ub--;

//             if (lb < ub)
//             {
//                 swap(a[lb], a[ub]);
//             }
//         }
//         swap(a[low], a[ub]);
//         quick_sort(a, low, ub - 1, count);
//         quick_sort(a, ub + 1, high, count);

//     }
        

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

//         int n, k;
//         cin >> n >> k;

//         int a[n];

//         for (int i = 0; i < n; i++)
//         {
//             cin >> a[i];
//         }

//         int count = 0;

//         cout<<quick_sort(a, 0, n, count)<<endl;
//     }

//     return 0;
// }

#include<bits/stdc++.h>
using namespace std;
#define int long long int
const int d = 1e9 + 7;
int powr(int a, int b) {
    int res = 1;
    while (b) {
    if (b & 1) res *= a, res %= d;
    a *= a; a %= d;
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
freopen("input.txt","r",stdin);
freopen("output.txt","w",stdout);
#endif
 
    int t;
    cin>>t;

    while(t--){
        int n,k;
        cin>>n>>k;

        vector<int> v(n);
        
        for(int i = 0;i<n;i++){
          cin>>v[i];
        }

        int checker = 1;
        int counter = 0;

        for(auto &value: v){
            if(checker == value){
                checker++;
                counter++;
            }
        }

        int res = n - counter;
        if(res%k){
            cout<<(res/k)+1<<endl;
        }

        else{
            cout<<res/k<<endl;
        }
    }
    return 0;
}
