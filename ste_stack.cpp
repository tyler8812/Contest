#include <bits/stdc++.h>

using namespace std;

string s;
set<string> st;
stack<string> dict;
int main() {
  int n, m, i, j, k, cmd;
  ios::sync_with_stdio(false);
  cin.tie(0);
  cin >> n;
  while (n--) {
    cin >> cmd;
    if (cmd == 1) {
      cin >> s;
      dict.push(s);
      st.insert(s);

    } else if (cmd == 2) {
      if (dict.size()) {
        string top = dict.top();
        st.erase(top);
        dict.pop();
      }
    } else {
      cin >> s;
      if (st.find(s) != st.end()) {
        cout << "Y";
      } else {
        cout << "N";
      }
    }
  }
  cout << endl;
  return 0;
}