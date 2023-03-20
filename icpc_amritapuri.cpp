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

    int t;
    cin >> t;

    while (t--)
    {
        int n;
        cin >> n;

        vector<int> A(n);
        for (int i = 0; i < n; i++)
        {
            cin >> A[i];
        }

        bool ok = 1;
        int count = 0;

        for (int i = 0; i < n - 1; i++)
        {
            for (int j = 0; j < 2; j++)
            {
                if (A[i] > A[i + 1])
                {   
                    ok = 0;
                    count++;
                    A[i + 1] ^= A[i];
                    A[i] ^= A[i + 1];
                    A[i + 1] ^= A[i];

                    if (i > 0 && A[i - 1] > A[i])
                    {
                        A[i] ^= A[i - 1];
                        A[i - 1] ^= A[i];
                        A[i] ^= A[i - 1];
                    }
                }
            }
        }

        // for (int i = 0; i < n; i++)
        // {
        //     cout << A[i] << " ";
        // }

        if(ok){
            cout<<0<<endl;
        }

        else{
            cout<<count<<endl;
        }

        cout<<endl;
    }

    return 0;
}
