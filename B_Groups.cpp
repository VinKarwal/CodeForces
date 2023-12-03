#include <bits/stdc++.h>
#define ll long long
using namespace std;
int main() {
  int t;
  cin >> t;
  while (t--) {
    int n; cin >> n;
    int days[n][5];
    for (int i = 0; i < n; i++) {
      for (int j = 0; j < 5; j++) {
        cin >> days[i][j];
      }
    }
    int flag = 0;
    for (int i = 0; i < 5; i++) {
      for (int j = i + 1; j < 5; j++) {
        int d1 = 0, d2 = 0, d = 0;
        for (int k = 0; k < n; k++) {
          if (days[k][i] && days[k][j])
            d++;
          else if (days[k][i])
            d1++;
          else if (days[k][j])
            d2++;
        }
        if (d1 + d2 + d == n && abs(d1 - d2) <= d)
          flag = 1;
      }
    }
    cout << (flag ? "YES" : "NO") << endl;
  }
}