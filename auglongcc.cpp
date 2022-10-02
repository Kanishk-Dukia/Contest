// #include<bits/stdc++.h>
// using namespace std;

// int main()
// {
//     int t;
//     cin>>t;
//     while(t--){
//         int n;
//         cin>>n;

//         cout<<n*2<<endl;
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
//         int x;
//         cin>>x;

//         if(x<=100){
//             cout<<x<<endl;
//         }

//         else if(x>100 && x<=1000){
//             cout<<x-25<<endl;
//         }

//         else if(x>1000 && x<=5000){
//             cout<<x-100<<endl;
//         }

//         else{
//             cout<<x-500<<endl;
//         }
//     }
//     return 0;
// }

// #include <bits/stdc++.h>
// using namespace std;

// int main()
// {
//     int t;
//     cin >> t;

//     while (t--)
//     {

//         int a, b;
//         cin >> a >> b;

//         int max = a > b ? a : b;
//         int min = a > b ? b : a;

//         while (min <= max)
//         {
//             if (min == max)
//             {
//                 cout << "yes" << endl;
//                 break;
//             }

//             min *= 2;
//         }

//         if (min > max)
//         {
//             cout << "no" << endl;
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

//         vector<int> v;

//         for(int i= 0;i<(n-1);i++){
//             int x;
//             cin>>x;
//             v.push_back(x);
//         }

//         sort(v.begin(),v.end());

//         int sum = 0;

//         for(auto &value : v){
//             sum+= value;
//         }

//         cout<<(sum + v[v.size() - 1])<<endl;

//     }
//     return 0;
// }

// #include <bits/stdc++.h>
// using namespace std;

// int main()
// {
//     int t;
//     cin >> t;

//     while (t--)
//     {
//         int X;
//         cin >> X;

//         int a, b;

//         bool flag = 0;

//         for ( a = 1; a <= pow(10, 4.5); ++a)
//         {
//             b=1;
//             if((2 * a + 2 * b + a * b) > X){
//                     break;                  }

//             for ( b = 1; b <= pow(10, 4.5); ++b)
//             {
//                 if ((2 * a + 2 * b + a * b) == X)
//                 {
//                     cout<<"yes"<<endl;
//                     b = pow(10,5);
//                     a = pow(10,5);
//                     flag = 1;
//                 }

//                 else if((2 * a + 2 * b + a * b) > X){
//                     break;

//                 }

//             }
//         }

//         if (2 * a + 2 * b + a * b != X  && flag == 0)
//         {
//             cout << "no" << endl;
//         }

//         // else if (2 * a + 2 * b + a * b == X)
//         // {
//         //     result:
//         //     cout << "yes" << endl;
//         // }
//     }
//     return 0;
// }
// -------------------------------------------------
// #include <bits/stdc++.h>
// using namespace std;

// int main()
// {
//     int t;
//     cin >> t;

//     while (t--)
//     {

//         float  X;
//         int b;

//         cin >> X;

//         float a;

//         bool flag = 0;

//         for (a = 1; a <= ((X - 2) / 3); a++)
//         {
//             float checker1 = ((X - (2 * a)) / (2 + a));
//             b = checker1;

//             if (b == checker1)
//             {
//                 cout << "yes"<< endl;
//                 flag =1;
//                 break;
//             }

//         }

//         if(flag == 0){
//             cout<<"no"<<endl;
//         }

//     }
//     return 0;
// }
// ----------------------------------------------------

// #include <bits/stdc++.h>
// using namespace std;

// int main()
// {
//     int t;
//     cin >> t;

//     while (t--)
//     {

//         int  X;
//         int b;

//         cin >> X;

//         int a;

//         bool flag = 0;

//         for (a = 1; a < (X/2) ; a++)
//         {
//             float checker1 = ((X - (2 * a)) / (2 + a));
//             b = checker1;

//             if (b == checker1)
//             {
//                 cout << "yes"<< endl;
//                 flag =1;
//                 break;
//             }

//             else
//             continue;

//         }

//         if(flag == 0 && X!= 0){
//             cout<<"no"<<endl;
//         }

//         else if(X == 0){
//             cout<<"yes"<<endl;
//         }

//     }
//     return 0;
// }

// #include <bits/stdc++.h>
// using namespace std;

// int main()
// {
//     int t;
//     cin >> t;

//     while (t--)
//     {
//         int X;
//         cin >> X;

//         bool flag = 1;

//         if (X < 5)
//         {
//             cout << "no" << endl;
//         }


//         else
//         {
//             for (int a = 1; a <= sqrt(X); a++)
//             {
//                 int temp = (X - (2 * a));
//                 if (temp % (a + 2) == 0)
//                 {
//                     flag = 0;
//                     cout << "yes" << endl;
//                     break;
//                 }
//             }
//         }

//         if (flag  && X>5)
//         {
//             cout << "no" << endl;
//         }
//     }
//     return 0;
// }