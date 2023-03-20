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
        int n;
        cin >> n;
        string s;
        cin >> s;

        int index = -1;
        int maxl1 = 0;
        bool ok = 0;

        for (int i = 0; i < n; i++)
        {
            if (s[i] == '1')
            {
                maxl1++;
            }

            else
            {
                ok = 1;
                index = i;
                break;
            }
        }

        if (!ok)
        {
            cout << maxl1 << endl;
        }

        else
        {
            int count = 0, result = INT32_MIN;

            for (int j = (index + 1); j < n; j++)
            {
                if (s[j] == '1')
                {
                    count++;
                    continue;
                }

                result = max(count, result);
                count = 0;
            }

            result = max(result, count);
            result += maxl1;
            cout << result << endl;
        }
    }
    return 0;
}