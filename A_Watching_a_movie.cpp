#include <bits/stdc++.h>
using namespace std;

int main() {
  int n, x;
  cin >> n >> x;
  int ans = 0;
  int prev = 1;
  for (int i = 0; i < n; i++) {
    int l, r;
    cin >> l >> r;
    ans += (r - l + 1) + ((l - prev) % x);
    prev = r + 1;
  }
  cout << ans << endl;
  return 0;
}