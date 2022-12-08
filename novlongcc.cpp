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
        // cin>>n;

//         string s;
//         cin>>s;

//         unordered_map<ll,char> m;

//         for(ll i = 0;i<n;i++){
//             m[s[i]]++;
//         }

//         bool ok = 1;

//         for(auto &value: m){
//             if(value.second%2 != 0){
//                 ok = 0;
//                 break;
//             }
//         }

//         if(ok){
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
// const int p=998244353;

// ll ncr (ll count){
//     ll num  = count*(count - 1);
//     return num/2;
// }

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
        
//         vector<ll> v(n);

//         ll count1 = 0;
//         for(ll i = 0;i<n;i++){
//             cin>>v[i];
            
//             count1+=v[i];     
//         }

//         ll res = ncr(count1);

//         cout<<(res*2)%998244353<<endl;
//     }
//     return 0;
// }

#include<bits/stdc++.h>
using namespace std;
#define int long long int
const int d = 1000000007;
const int temp = 1e6;
int arrfact[temp];

int fact(int k){
    if(k == 1){
        return 1;
    }

    else{
        return k*fact(k-1);
    }
}

int multi(int x,int y){
    return (x*y) % d;
}

void calculate_factorial(){
    arrfact[0] = 1;
    for(int i = 1;i<temp;i++){
        arrfact[i] = multi(arrfact[i-1],i);
    }
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
    
    calculate_factorial();
    int t;
    cin>>t;

    while(t--){
        int n;
        cin>>n;

        vector<int> v(n);
    
        for(int i = 0;i<n;i++){
            cin>>v[i];          
        }


        int sum = 0;
        for(int i = 0;i<n;i++){
            sum = ((sum%d) + (arrfact[v[i]]%d) )%d;  
        }
    

        cout<<sum<<endl;
    }
    return 0;
}


