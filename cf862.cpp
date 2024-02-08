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

    int n;
    cin >> n;
    vector<int> v(n);

    for (int i = 0; i < n; i++)
    {
        cin >> v[i];
    }

    int x = 0;
    for (auto &value : v)
    {
        x = x ^ value;
    }

    if (n % 2)
    {
        cout << x << endl;
    }

    else
    {
        if (x == 0)
        {
            cout << 0 << endl;
        }
        else
        {
            cout << -1 << endl;
        }
    }
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
    int n;
    cin >> n;

    string s;
    cin >> s;

    char K = s[0];

    int kindex = 0;

    for (int i = 1; i < n; i++)
    {
        if (s[i] <= K)
        {
            K = s[i];
            kindex = i;
        }
    }

    if (K == s[0] && kindex != 0)
    {
        string temp = "";
        temp += K;
        for (int i = 0; i < n; i++)
        {
            if (i == kindex)
            {
                continue;
            }

            else
            {
                temp += s[i];
            }
        }

        cout<<temp<<endl;
    }

    else if (K < s[0])
    {
        string temp = "";
        temp += K;
        for (int i = 0; i < n; i++)
        {
            if (i == kindex)
            {
                continue;
            }

            else
            {
                temp += s[i];
            }
        }

        cout<<temp<<endl;
    }

    else if (kindex == 0)
    {
        cout<<s<<endl;
    }
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
    ;
    cin >> t;

    while (t--)
    {
        solve();
    }
    return 0;
}