#include <bits/stdc++.h>
#define ll long long
using namespace std;

int main() {
  int n, m; cin >> n >> m;
  string s[n];
  for (int i = 0; i < n; i++) {
    cin >> s[i];
  }
  for (int i = 0; i < n; i++) {
    for (int j = 0; j < m; j++) {
      int flag = 1;
      for (int k = 0; k < n; k++) if (k != i) if (s[i][j] == s[k][j]) flag = 0;
      for (int k = 0; k < m; k++) if (k != j) if (s[i][j] == s[i][k]) flag = 0;
      if (flag == 1) {
        cout << s[i][j];
      }
    }
  }
  cout << endl;
  return 0;
}