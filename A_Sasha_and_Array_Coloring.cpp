#include <bits/stdc++.h>
using namespace std;

int main() {
  int t;
  cin >> t;
  while (t--) {
    int n;
    cin >> n;
    int a[n];
    for (int i = 0; i < n; i++) {
      cin >> a[i];
    }
    sort(a, a + n);
    int ans = 0;
    for (int i = 1; i <= n / 2; i++) {
      ans += a[n - i] - a[i - 1];
    }
    n == 1 ? cout << 0 << endl : cout << ans << endl;
  }
  return 0;
}