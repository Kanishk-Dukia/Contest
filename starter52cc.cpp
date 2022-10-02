// #include <iostream>
// using namespace std;

// int main() {
// 	int n;
// 	cin>>n;
	
// 	if(n<=1000){
// 	    cout<<"yes"<<endl;
// 	}
	
// 	else{
// 	    cout<<"no"<<endl;
// 	}
// 	return 0;
// }

// #include<bits/stdc++.h>
// using namespace std;

// int main()
// {
//     int t;
//     cin>>t;

//     while(t--){
//         int a,b,c;

//         cin>>a>>b>>c;

//         int max =  a > c ? a:c;

//         if(max<=b){
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

// int main()
// {
//     int t;
//     cin>>t;

//     while(t--){
//         int n;
//         cin>>n;

//         int A[n];
//         for(int i =0;i<n;i++){
//             cin>>A[i];
//         }

//         string s;
//         cin>>s;

//         // cout<<s[0]<<" "<<s[1]<<s[2]<<endl;

//         vector<pair<int,char>> v;
        

//         for(int i= 0;i<n;i++){      
//             v.push_back({A[i] , s[i]});
//         }

//         sort(v.begin(),v.end());

//         for(auto &value: v){
//              if(value.second == '0'){
//                 cout<<value.first<<endl;
//                 break;
//              }
    

//         }

       

        
//     }
//     return 0;
// }

#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin>>t;

    while(t--){
        
        int n;
        cin>>n;


        vector<int> v(n);

        for(int i= 0 ;i<n;i++){
            int x;
            cin>>x;
            v.push_back(x);
        }

        for (int i = 0; i < n; i++)
        {
            int temp = v[0];

        }
        


    }
    return 0;
}