#include <bits/stdc++.h>
 
using namespace std;
 
typedef long long ll;
 
const int N = 2005;
 
ll dp[N][N];
int n;
vector <pair <ll, ll>> a;
 
ll go(int l, int r, int idx) {
  if(idx == n) return 0;
  if(dp[l][r] != -1) return dp[l][r];
  ll p = a[idx].first, q = a[idx].second;
  ll LL = p * abs(q - l) + go(l + 1, r, idx + 1);
  ll RR = p * abs(q - r) + go(l, r - 1, idx + 1);
  ll res = max(LL, RR);
  return dp[l][r] = res;
}
 
int main() {
  cin >> n;
  a.resize(n);
  for(ll i = 0; i < n; i++) {
    cin >> a[i].first;
    a[i].second = i;
  }
  sort(a.rbegin(), a.rend());
  memset(dp, -1, sizeof dp);
  cout << go(0, n - 1, 0) << '\n';
}
