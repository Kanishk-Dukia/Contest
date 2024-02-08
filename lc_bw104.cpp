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

// int32_t main()
// {
//     ios_base::sync_with_stdio(false);
//     cin.tie(NULL);
//     cout.tie(NULL);

// #ifndef ONLINE_JUDGE
//     freopen("input.txt", "r", stdin);
//     freopen("output.txt", "w", stdout);
// #endif

//     int sum = 0;

//     vector<vector<int>> nums = {{7, 2, 1}, {6, 4, 2}, {6, 5, 3}, {3, 2, 1}};

//     for (int i = 0; i < nums.size(); i++)
//     {

//         sort(nums[i].begin(), nums[i].end());
//     }

//     int k = nums[0].size() - 1;
//     int maxi = 0;

//     while (k >= 0)
//     {

//         for (int i = 0; i < nums.size(); i++)
//         {

//             int l = nums[i][k];

//             maxi = max(maxi, l);
//         }

//         sum += maxi;
//         maxi = 0;
//         k--;
//     }

//     cout << sum;

//     // cout << count;

//     return 0;
// }
