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
//     string s;
//     cin >> s;

//     unordered_map<char,int> mp;
//     for(int  i = 0;i<s.size();i++){
//         mp[s[i]]++;
//     }

//     if(mp.size() == 1){
//         cout<<-1<<endl;
//     }

//     else{
//         cout<<s.size()-1<<endl;
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
    int n, m;
    cin >> n >> m;

    int mini = min(n, m);
    int k = n * m;

    vector<int> v(k);

    for (int i = 0; i < k; i++)
    {
        cin >> v[i];
    }

    sort(v.begin(), v.end());
    reverse(v.begin(), v.end());

    int f1 = v[0];
    int f2 = v[1];

    int x2 = f2 - v[k - 1];
    x2 *= mini - 1;

    int y2 = f1 - v[k - 1];
    y2 *= k - mini;

    x2 += y2;

    int x1 = f1 - v[k - 2];
    x1 *= mini - 1;

    int y1 = f1 - v[k - 1];
    y1 *= k - mini;

    x1 += y1;

    int result = max(x1, x2);

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