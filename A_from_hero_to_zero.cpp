#include <bits/stdc++.h>
using namespace std;

void solve() {
  long long int n, k, count = 0;
  cin >> n >> k;

  while (n > 0) {
    if (n % k == 0) {
      n /= k;
      count++;
    } else {
      count += n % k;
      n -= n % k;
    }
  }
  cout << count << endl;
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