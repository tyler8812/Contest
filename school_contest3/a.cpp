#include <iostream>

using namespace std;
int dp[105][105][105] = {0};
int main() {
    int n, m, i, j, k;
    cin >> n >> m;

    dp[0][0][0] = 1;
    for (i = 0; i < 100; i++) {
        for (j = 0; j < m; j++) {
            for (k = 0; k < n; k++) {
                if (j && i != 99) dp[i][j][k] += dp[i][j - 1][k];
                if (k && i != 99) dp[i][j][k] += dp[i][j][k - 1];
                if (i && k && (i != 74)) dp[i][j][k] += dp[i - 1][j][k - 1];
                if (i > 1 && (i != 75)) dp[i][j][k] += dp[i - 2][j][k];
                dp[i][j][k] %= 48763;
            }
        }
    }
    int ans = 0;
    for (j = 0; j < m; j++) {
        for (k = 0; k < n; k++) {
            ans += dp[99][j][k];
        }
    }
    cout << ans % 48763 << endl;
    return 0;
}