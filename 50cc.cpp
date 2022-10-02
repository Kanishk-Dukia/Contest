// #include<bits/stdc++.h>
// using namespace std;

// int main()
// {
//     int t;
//     cin>>t;

//     while(t--){
//         int p;
//         cin>>p;
       
//         cout<<(100 -p)<<endl;
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
//         float n,x,y,a,b;
//         cin>>n>>x>>y>>a>>b;
 
//         float pl = n/a;
//         float dl = n/b;

//         float pc = pl*x;
//         float dc = dl*y;

//         if(pc>dc){
//             cout<<"diesel"<<endl;
//         }

//         else if(dc>pc){
//             cout<<"petrol"<<endl;
//         }

//         else if(dc == pc){
//             cout<<"any"<<endl;
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
        int a , b;
        cin>>a>>b;

        int k = abs(a-b);
        cout<<(k+1)/2<<endl;
    }
    return 0;
}