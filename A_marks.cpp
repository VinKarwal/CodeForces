#include <bits/stdc++.h>
using namespace std;

int main() {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  int n, m, count = 0;
  cin >> n >> m;

  string s[n];

  for (int i = 0; i < n; i++) {
    cin >> s[i];
  }
  vector<int> ans(m, 0);
  for (int i = 0; i < m; i++) {
    for (int j = 0; j < n; j++) {
      ans[i] = max(ans[i], s[j][i] - '0');
    }
  }

  for (int i = 0; i < n; i++) {
    for (int j = 0; j < m; j++) {
      if (s[i][j] - '0' == ans[j]) {
        count++;
        break;
      }
    }
  }

  cout << count << endl;
  return 0;
}