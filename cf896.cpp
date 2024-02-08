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

// int modinv(int n, int d)
// {
//     return powr(n, d - 2);
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
//     if (n % 2 == 0)
//     {
//         cout << 2 << endl;
//         cout << 1 << " " << n << endl;
//         cout << 1 << " " << n << endl;
//     }

//     else
//     {
//         cout<<4<<endl;
//         cout<<1<<" "<<n<<endl;
//         cout<<1<<" "<<n-1<<endl;
//         cout<<n-1<<" "<<n<<endl;
//         cout<<n-1<<" "<<n<<endl;
//     }
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

int modinv(int n, int d)
{
    return powr(n, d - 2);
}

void solve()
{
    int n, k, a, b;
    cin >> n >> k >> a >> b;

    vector<pair<int, int>> v(n);
    for (int i = 0; i < n; i++)
    {
        int x, y;
        cin >> x >> y;
        v[i].first = x;
        v[i].second = y;
    }

    int diss = 1e15;
    int disd = 1e15;

    int ans = abs(v[a - 1].first - v[b - 1].first) + abs(v[a - 1].second - v[b - 1].second);
    for (int i = 0; i < k; i++)
    {
        int temps = abs(v[i].first - v[a - 1].first) + abs(v[i].second - v[a - 1].second);
        int tempd = abs(v[i].first - v[b - 1].first) + abs(v[i].second - v[b - 1].second);


        diss = min(diss, temps);
        disd = min(disd, tempd);
    }

    ans = min(ans, diss + disd);

    cout << ans << endl;
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