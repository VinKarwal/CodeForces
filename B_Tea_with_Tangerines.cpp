#include <bits/stdc++.h>
#define ll long long int
using namespace std;

int main() {
  int t;
  cin >> t;
  while (t--) {
    int n;
    cin >> n;
    ll a[n];
    for (int i = 0; i < n; i++) cin >> a[i];
    sort(a, a + n);
    ll ans = 0;
    int val = 2 * a[0] - 1;
    for (int i = 1; i < n; i++) {
      if (a[i] > val) {
        a[i] % val == 0 ? ans += a[i] / val - 1 : ans += a[i] / val;
      }
    }
    cout << ans << endl;
  }
  return 0;
}