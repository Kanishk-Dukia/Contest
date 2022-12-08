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
//     ll k = 0;

//     while(t--){
    
//         ll m,n,p;
//         cin>>m>>n>>p;
//         vector<ll> v(n);

//         ll a[m][n];

//         for(ll i =0 ;i<m;i++){

//             for(ll j = 0;j<n;j++){
//                 cin>>a[i][j];
//             }          
//         }


//         for(ll j = 0;j<n;j++){
//             ll maxi = INT32_MIN;
//             for(ll i = 0;i<m;i++){
//               maxi = max(maxi,a[i][j]);
//             }
//             v[j] = maxi;      
//         }

//         ll result = 0;

//         for(ll i = 0;i<n;i++){
//             if(a[p-1][i] < v[i]){
//                 result+=  v[i] - a[p-1][i];
               
//             }
//         }

//         k++; 

//         cout<<"Case #"<<k<<":"<<" "<<result<<endl;
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
 
    ll t;
    cin>>t;
    ll k =0;
    

    while(t--){
        ll r,R;
        cin>>r>>R;
        vector<ll> vr;
        vector<ll> vy;

        ll n;
        cin>>n;

        for(ll i = 0;i<n;i++){
            ll x,y;
            cin>>x>>y;
            float temp = sqrt(x*x + y*y);
            if(temp <= R +r){
                vr.push_back(temp);
            }
        }

        ll m;
        cin>>m;
     
        for(ll i = 0;i<m;i++){
           
            ll x,y;
            cin>>x>>y;
            float temp = sqrt(x*x + y*y);
            if(temp <= R +r){
                vy.push_back(temp);
            }     
        }

        ll minvr = 0;
        ll minvy = 0;

        if(n == 0){
            minvr = INT32_MAX;
        }

        else{
            sort(vr.begin(),vr.end());
            minvr = *min_element(vr.begin(),vr.end());
        }

        if(m == 0){
            minvy = INT32_MAX;
        }

        else{
            
            sort(vy.begin(),vy.end());
            minvy = *min_element(vy.begin(),vy.end());         
        }
        
        
        ll countr = 0;
        ll county = 0;

        if(minvr>minvy){
           
            county = upper_bound(vy.begin(),vy.end(),minvr) - vy.begin();
        }

        else if(minvy>minvr){
            
            countr = upper_bound(vr.begin(),vr.end(),minvy) - vr.begin();
        }

        k++;
        
        cout<<"Case #"<<k<<":"<<" "<<countr<<" "<<county<<endl;
    }
    return 0;
}