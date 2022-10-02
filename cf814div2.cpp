// #include<bits/stdc++.h>
// using namespace std;

// int main()
// {
//     int t;
//     cin>>t;

//     while(t--){
//          unsigned int n,m;

//         cin>>n>>m;

//         if((n%2 == 0 && m%2 != 0) || (n%2 != 0 && m%2 == 0)){
//             cout<<"Burenka"<<endl;
//         }

//         else if(n%2 != 0 && m%2 !=0){
//             cout<<"Tonya"<<endl;
//         }

//         else if(n%2 == 0 && m%2==0){
//             cout<<"Tonya"<<endl;
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
        int n,k;

        cin>>n>>k;

        int temp1=(1 + k)*n;
        int temp2=(n + k)*1;
        
        if(temp1%4 ==0 || temp2%4==0){
            cout<<"YES"<<endl;
            for(int i =1;i<=n/2;i++){
                cout<<i<<" "<<(n - i +1)<<endl;
            }
        }

        else{
            cout<<"NO"<<endl;
        }
    }
    return 0;
}