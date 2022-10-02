// // 

// #include<iostream>
// using namespace std;

// int main()
// {
//     int t;
//     cin>>t;

//     while(t--){

//         int a,b,c,d;
//         cin>>a>>b>>c>>d;

//         int maxab = a>=b ? a:b;

//         int maxcd = c>=d ? c:d;

//         cout<<maxab + maxcd<<endl;
//     }
//     return 0;
// }

// #include<iostream>
// using namespace std;

// int main()
// {
//     int t;
//     cin>>t;

//     while(t--){
//         int n ;
//         string S,R;

//         cin>>n;
//         cin>>S;
//         cin>>R;

//         int count = 0;

//         for(int i = 0 ; i<n;i++){
//             if(S[i] != R[i]){
//                 count++;
//             }

//             else
//             continue;
//         }

//         if(count%2 == 0){
//             cout<<1<<endl;
//         }

//         else{
//             cout<<0<<endl;
//         }
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
    
    
//     int arr[3];

//     for(int i = 0;i<3;i++){
//         cin>>arr[i];
//     }
//     sort(arr, arr + 3);

//     if(arr[0] == arr[1]){
//         cout<<"yes"<<endl;
//     }

//     else{
//         cout<<"no"<<endl;
//     }
//     }
//     return 0;
// }


#include <iostream>
using namespace std;

int main() {
	int t;
	cin>>t;
	
	while(t--){
	   int n;
	   cin>>n;
	   
       int a[n];
       for(int i= 0;i<n;i++){
        cin>>a[i];
       }
       int count = 0;
       for(int j= 0;j<n;j++){
       int temp = 0;
        for(int k= 0;k<n;k++){
           if(a[k] == a[j]){
            temp++;
           }

           else
           continue;
        }

        if(temp>= count){
            count= temp;
        }

        else
        continue; 
       }
        
       if(count%2 == 0 && count != 2){
        cout<<(count/2)<<endl;
       }

       else if (count %2 != 0 ){
        cout<<(count/ 2) + 1<<endl;
       }

       else if(count == 2){
        cout<<2<<endl;
       }

       else if(count == 1){
        cout<<1<<endl;
       }
	}
	return 0;
}
