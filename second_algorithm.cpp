#include <bits/stdc++.h>
using namespace std;
  // recursive algorithm with lamda function  and 2d vectors :
signed main() {
    int n;
    cin >> n;
    vector<vector<int>> a(n, vector<int>(n));

    for (int i = 0; i < n; ++i) {
        for (int j = 0; j < n; ++j) {
            cin >> a[i][j];
        }
    }

    int sum1 = 0, sum2 = 0;

    function<void(int, int)> rec = [&](int i, int j) {
        sum1 += a[i][j];
        if (i == n - 1 && j == 0) return;
        rec(i + 1, j - 1);
    };

    function<void(int, int)> rec2 = [&](int i, int j) {
        sum2 += a[i][j];
        if (i == n - 1 && j == n - 1) return;
        rec2(i + 1, j + 1);
    };

    rec(0, n - 1);
    rec2(0, 0);

    cout << abs(sum1 - sum2) << endl;

    return 0;
}
