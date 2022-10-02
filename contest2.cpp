// #include<iostream>
// using namespace std;

// int main()
// {
//     int t;
//     cin>>t;

//     while(t--){

//           int n,m;
//           cin>>n>>m;

//           cout<<n*m;
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
//         int x,y;
//         cin>>x>>y;

//         if(y>x){
//             cout<<y-x<<endl;
//         }

//         else{
//             cout<<0<<endl;
//         }
//     }
//     return 0;
// }

#include <iostream>
using namespace std;

int main()
{
    int t;
    cin >> t;

    while (t--)
    {

        int n, p;
        int a[p];

        for (int j = 0; j < p; j++)
        {
            cin >> a[j];
        }

        
        for (int j = 0; j < p; j++)
        {
            int count = 0;
            for (int k = 0; k < p; k++)
            {
                if (a[k] == a[j])
                {
                    count++;
                }

                else
                {
                    continue;
                }
            }

            if (count == a[j])
            {
                continue;
            }

            else
            {
                goto jump;
            }


        }
         
    jump: cout<<"no"<<endl; 
        cout<<"yes"<<endl;;
    }
    return 0;
}