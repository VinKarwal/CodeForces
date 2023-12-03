#include <bits/stdc++.h>
using namespace std;

void solve() {
  long long int a, b, ans = INT_MAX;
  cin >> a >> b;
  for (int i = 0; i < 31; i++) {
    int count = 0, tmp = a;

    if (b + i == 1) continue;

    while (tmp > 0) {
      tmp /= (b + i);
      count++;
    }

    if (count + i < ans) ans = count + i;
  }
  cout << ans << endl;
}

int main() {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  int t;
  cin >> t;

  while (t--) {
    solve();
  }

  return 0;
}