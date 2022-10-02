// #include<bits/stdc++.h>
// using namespace std;

// int main()
// {
//     int t;
//     cin>>t;

//     while(t--){
//         int x;
//         cin>>x;

//         if(x<300){
//             cout<<3000<<endl;
//         }

//         else{
//             cout<<x*10<<endl;
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
//         int a, b, c;
//         cin >> a >> b >> c;

//         float k = float(a + b) / 2;
//         if (k > c)
//         {
//             cout << "yes" << endl;
//         }

//         else
//             cout << "no" << endl;
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
//         long long n;
//         cin >> n;

//         if (n % 2 == 0)
//         {
//             long long k = n / 2;
//             cout << (k * k) * 2 << endl;
//         }

//         else
//         {
//             long long l = (n/2) + 1;
//             long long m = n/2;
//             cout<< (l*m)*2<<endl;
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
//         int w, x, y, z;
//         cin >> w >> x >> y >> z;

//         if (x == w || y == w || z == w || x + y == w || y + z == w || z + x == w || x + y + z == w)
//         {
//             cout<<"yes"<<endl;
//         }

//         else{
//             cout<<"no"<<endl;
//         }
//     }
//     return 0;
// }

#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;

    while (t--)
    {
        int n;
        cin >> n;

        int arr1[n];

        for (int i = 0; i < n; i++)
        {
            cin >> arr1[i];
        }

        int arr2[n];

        for (int j = 0; j < n; j++)
        {
            cin >> arr2[j];
        }

        int arr[n];
        int count = 0;
        
        for (int k = 0; k < n; k++)
        {
            arr[k] = arr1[k] - arr2[k];
            if (arr1[k] > arr2[k])
            {
                count++;
            }

            else
            {
                continue;
            }
        }

        int sum = 0;

        for (int l = 0; l < n; l++)
        {
            sum = sum + arr[l];
        }

        if (sum == 0)
        {
            cout << count << endl;
        }

        else
            cout << -1 << endl;
    }
    return 0;
}