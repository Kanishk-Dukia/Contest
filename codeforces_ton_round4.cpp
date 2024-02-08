// #include <bits/stdc++.h>
// using namespace std;
// #define int long long int
// const int d = 1e9 + 7;
// int powr(int a, int b)
// {
//     int res = 1;
//     while (b)
//     {
//         if (b & 1)
//             res *= a, res %= d;
//         a *= a;
//         a %= d;
//         b /= 2;
//     }
//     return res;
// }

// void solve()
// {
//     int n;
//     cin >> n;

//     vector<int> v(n);

//     for (int i = 0; i < n; i++)
//     {
//         cin >> v[i];
//     }

//     int count = 0;

//     for (int i = 0; i < n; i++)
//     {
//         count++;
//         if (count >= v[i])
//         {
//             cout << "YES" << endl;
//             return;
//         }
//     }

//     cout << "NO" << endl;
// }

// int modinv(int n, int d)
// {
//     return powr(n, d - 2);
// }

// int32_t main()
// {
//     ios_base::sync_with_stdio(false);
//     cin.tie(NULL);
//     cout.tie(NULL);

// #ifndef ONLINE_JUDGE
//     freopen("input.txt", "r", stdin);
//     freopen("output.txt", "w", stdout);
// #endif

//     int t;
//     cin >> t;

//     while (t--)
//     {
//         solve();
//     }
//     return 0;
// }

// #include <bits/stdc++.h>
// using namespace std;
// #define int long long int
// const int d = 1e9 + 7;
// int powr(int a, int b)
// {
//     int res = 1;
//     while (b)
//     {
//         if (b & 1)
//             res *= a, res %= d;
//         a *= a;
//         a %= d;
//         b /= 2;
//     }
//     return res;
// }

// void solve()
// {
//     int n;
//     cin >> n;

//     if (n % 2)
//     {

//         int k = n;
//         k/=2;
//         int result = 0;

//         vector<int> v(40);
//         while(k>0){
//           int temp = k%2;
//           result++;
//           v[result] = temp;
//           k/=2;
//         }

//         cout<<result<<endl;
//         for(int i = result;i>0;i--){
//             cout<<v[i]+1<<" ";
//         }

//         cout<<endl;

//     }

//     else
//     {
//         cout<<-1<<endl;
//     }
// }

// int modinv(int n, int d)
// {
//     return powr(n, d - 2);
// }

// int32_t main()
// {
//     ios_base::sync_with_stdio(false);
//     cin.tie(NULL);
//     cout.tie(NULL);

// #ifndef ONLINE_JUDGE
//     freopen("input.txt", "r", stdin);
//     freopen("output.txt", "w", stdout);
// #endif

//     int t;
//     cin >> t;

//     while (t--)
//     {
//         solve();
//     }
//     return 0;
// }

#include <bits/stdc++.h>
using namespace std;
#define int long long int
const int d = 1e9 + 7;
int powr(int a, int b)
{
    int res = 1;
    while (b)
    {
        if (b & 1)
            res *= a, res %= d;
        a *= a;
        a %= d;
        b /= 2;
    }
    return res;
}

void solve()
{
    int n, c, d;
    cin >> n >> c >> d;

    vector<int> v(n);
    map<int, int> mp;
    for (int i = 0; i < n; i++)
    {
        cin >> v[i];
        mp[v[i]]++;
    }

    int count1 = 0;
    int temp = 0;
    bool ok = 1;
    sort(v.begin(), v.end());
    int maxi = v[n - 1];

    int cost = 0;

    for (int i = 1; i <= maxi; i++)
    {
        if (mp[i])
        {
            count1 += mp[i];
            if (ok == 1)
            {
                temp = i;
            }
            cost += c * (mp[i] - 1);
            ok = 0;
        }

        else if (mp[i] == 0 && ok == 0)
        {
            break;
        }
    }

    if (temp != 1)
    {
        for (int i = 1; i < temp; i++)
        {
            cost += d;
        }
    }

    for (auto &value : mp)
    {
        if (value.first <= temp)
        {
            continue;
        }

        else
        {
            cost += value.second;
        }
    }

    cost = cost * c;

    int cost1 = 0;

    for (int i = 1; i < maxi; i++)
    {
        if (mp[i] == 0)
        {
            cost1 += d;
        }

        else
        {
            cost1 += d * (mp[i] - 1);
        }
    }
    
    // cout << cost << cost1 << endl;
    int result = min(cost, cost1);

    cout << result << endl;
}
int modinv(int n, int d)
{
    return powr(n, d - 2);
}

int32_t main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

#ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
#endif

    int t;
    cin >> t;

    while (t--)
    {
        solve();
    }
    return 0;
}