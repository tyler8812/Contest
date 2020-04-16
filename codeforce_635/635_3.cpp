#include <bits/stdc++.h>
 
using namespace std;
 
typedef long long ll;
 
const int N = 2e5 + 5;
 
int sub[N], dep[N];
vector <int> g[N];
vector <int> ans;
 
void dfs(int u, int p, int d) {
  sub[u] = 1; dep[u] = d;
  for(auto v : g[u]) {
    if(v == p) continue;
    dfs(v, u, d + 1);
    sub[u] += sub[v];
  }
  ans.push_back(dep[u] - sub[u] + 1);
}
 
int main() {
  int n, k; cin >> n >> k;
  for(int i = 1; i < n; i++) {
    int u, v; cin >> u >> v;
    g[u].push_back(v);
    g[v].push_back(u);
  }
  dfs(1, -1, 0);
  sort(ans.rbegin(), ans.rend());
//	sort(dep, dep+n+1, greater<int>());
  ll sum = 0;
  for(int i = 0; i < k; i++) sum += 1LL * ans[i];
  cout << sum << '\n';
}
