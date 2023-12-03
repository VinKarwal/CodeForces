#include <bits/stdc++.h>
#define ll long long
using namespace std;
int main() {
  int t;
  cin >> t;
  while (t--) {
    string a, b; cin >> a >> b;
    int n = a.size(), m = b.size(), result = 0;
    int ls[n + 1][m + 1];
    for (int i = 0; i <= n; i++) {
      for (int j = 0; j <= m; j++) {
        if (i == 0 || j == 0) ls[i][j] = 0;
        else if (a[i - 1] == b[j - 1]) {
          ls[i][j] = ls[i - 1][j - 1] + 1;
          result = max(result, ls[i][j]);
        }
        else ls[i][j] = 0;
      }
    }
    cout << n + m - (2 * result) << endl;
  }
}