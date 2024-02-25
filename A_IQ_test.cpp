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

int32_t main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

#ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
#endif

    int n;
    cin >> n;

    int cnte = 0;
    int cnto = 0;

    vector<int> v(n);

    for (int i = 0; i < n; i++)
    {
        cin >> v[i];

        if (v[i] % 2)
        {
            cnto++;
        }

        else
        {
            cnte++;
        }
    }

    if (cnte == 1)
    {
        for (int i = 0; i < n; i++)
        {
            if (v[i] % 2 == 0)
            {
                cout << i + 1 << endl;
                break;
            }
        }
    }

    else
    {
        for (int i = 0; i < n; i++)
        {
            if (v[i] % 2 == 1)
            {
                cout << i + 1 << endl;
                break;
            }
        }
    }
    return 0;
}