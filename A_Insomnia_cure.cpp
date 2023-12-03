#include <bits/stdc++.h>
#define ll long long int
using namespace std;

int main() {
  int k, l, m, n, d;
  cin >> k >> l >> m >> n >> d;
  int ans = 0;
  for (int i = 0; i < d; i++) {
    if ((i + 1) % k == 0 || (i + 1) % l == 0 || (i + 1) % m == 0 ||
        (i + 1) % n == 0) {
      ans++;
    }
  }
  cout << ans << endl;
  return 0;
}