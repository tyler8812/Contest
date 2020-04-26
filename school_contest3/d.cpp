#include <iostream>
using namespace std;

long long dp[1001][1001];

int main() {
    ios::sync_with_stdio(0), cin.tie(0);
    int n, a[1001];
    cin >> n;
    a[0] = 0;
    for(int i = 1; i <= n; i++)
        cin >> a[i], a[i] += a[i - 1];
    for(int i = 2; i <= n; i++)
        for(int j = 0; j + i <= n; j++){
            dp[j][j + i] = 1e9;
            for(int k = j + 1; k < j + i; k++)
                dp[j][j + i] = min(dp[j][j + i], dp[j][k] + dp[k][j + i]);
            dp[j][j + i] += a[j + i] - a[j];
        }
    cout << dp[0][n] << "\n";
}