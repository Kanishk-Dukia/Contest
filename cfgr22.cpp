#include <bits/stdc++.h>
using namespace std;
#define ll long long int

int main()
{
 

    ll t;
    cin >> t;
        

    while (t--)
    {
        ll n;
        cin >> n;
        vector<pair<ll, ll>> v(n) ;   
        ll count0 = 0;
        ll count1 = 0;      
        ll sum = 0;
        ll result;      
        for (ll i = 0; i < n; i++)
        {
            ll x;
            cin >> x;
            v[i].first = x;
            if (x == 1)
                count1++;
            else
                count0++;
        }
        for (ll i = 0; i < n; i++)
        {
            cin >> v[i].second;
        }
        sort(v.begin(),v.end());
        vector<ll> v1p(count1) ;
        vector<ll> v0p(count0) ;
       
       
        for(ll i = 0;i<count0;i++){
           v0p[i] = v[i].second; 
        }
        
        for(ll i = 0;i<count1;i++){
           v1p[i] = v[count0 + i].second; 
        }
       
        ll min0 = 0;
        ll min1 = 0;
        if(count0!=0){
            min0 = *min_element(v0p.begin(),v0p.end()); }
            
        if(count1!=0){
            min1 = *min_element(v1p.begin(),v1p.end()); }

        if(count1 == count0){
            if(min0>=min1){
               sum = v1p[0];
               for(ll i =0;i<count0;i++){
                sum+=2*v0p[i];
               }
               for(ll i =1;i<count1;i++){
                sum+=2*v1p[i];
               }
            }
            else{
                sum = v0p[0];
               for(ll i =0;i<count1;i++){
                sum+=2*v1p[i];
               }
               for(ll i =1;i<count0;i++){
                sum+=2*v0p[i];
               }
            }
            result = sum;
        }
        else if(count1>count0){
            
            sort(v1p.begin(),v1p.end());
            sort(v0p.begin(),v0p.end());
            for(ll i= 0;i<count0;i++){
                sum+=2*v1p[count1-1-i];
            }
            for(ll i= 0;i<count0;i++){
                sum+=2*v0p[i];
            }      
           sum = accumulate(v1p.begin(),v1p.end() - count0,sum);     
        result =sum;     
        }
        else {
            sort(v1p.begin(),v1p.end());
            sort(v0p.begin(),v0p.end());
            for(ll i= 0;i<count1;i++){
                sum+=2*v1p[i];
            }
            for(ll i= 0;i<count1;i++){
                sum+=2*v0p[count0 -1-i];
            }        
           sum = accumulate(v0p.begin(),v0p.end() - count1,sum);         
           result = sum;
        }  
        cout<<result<<endl;

    }

    return 0;
}
