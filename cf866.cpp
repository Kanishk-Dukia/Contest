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
    string s;
    cin >> s;

    int n = s.size();

    int cnt = 0;

    if (n == 1)
    {
        if (s[0] == '_')
        {
            cout << 2 << endl;
            return;
        }

        else
        {
            cout << 1 << endl;
            return;
        }
    }

    if (s[0] == '_')
    {
        cnt++;
    }

    if (s[n - 1] == '_')
    {
        cnt++;
    }

    for (int i = 0; i < n - 1; i++)
    {
        if (s[i] == '_' && s[i + 1] == '_')
        {
            cnt++;
        }
    }

    cout << cnt << endl;
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