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
//         int n;
//         cin>>n;

//         int a[n];
//         for(int i = 0;i<n;i++){
//             cin>>a[i];
//         }

//         if(a[0] == 1){
//             cout<<"yes"<<endl;
//         }

//         else{
//             cout<<"no"<<endl;
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
 
//     ll t;
//     cin>>t;

//     while(t--){
//         ll n;
//         cin>>n;
//         string s;
//         cin>>s;

//         ll count1 =0;
//         ll count0 =0;
//         ll ccount1 = 0;
//         ll ccount0 = 0;
//         ll max0 = 0;
//         ll max1 = 0;

//         for(ll i = 0;i<n;i++){

//             if(s[i] == '1'){
//                 max0 = max(ccount0,max0);
//                 ccount0= 0;
//                 ccount1++;
//             }

//             else if(s[i] == '0'){
//                 max1 = max(ccount1,max1);
//                 ccount1= 0;
//                 ccount0++;
//             }

//         }  

//         if(ccount0>max0){
//             max0 = ccount0;
//         }

//         if(ccount1>max1){
//             max1 = ccount1;
//         }



//         for (ll i = 0; i < n; i++)
//         {
//            if(s[i] == '1'){
//                 count1++;
//             }

//             else{
//                 count0++;
//             }
//         }

        

//         ll multi = count1*count0;
//         ll multi1 = max1*max1;
//         ll multi0 = max0*max0;

//         if((count1 == 1 && count0 == 0 )|| count0 == 1 && count1 == 0){
//             cout<<"1"<<endl;
//         }

//         else if(multi1 >= multi0){
//             if(multi1>=multi){
//                 cout<<multi1<<endl;
//             }

//             else{
//                 cout<<multi<<endl;
//             }
//         }

//         else{
//             if(multi0>=multi){
//                 cout<<multi0<<endl;
//             }

//             else{
//                 cout<<multi<<endl;
//             }
//         }
            
//     }
//     return 0;
// }

