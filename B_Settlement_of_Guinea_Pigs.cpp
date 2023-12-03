#include <bits/stdc++.h>
#define ll long long
using namespace std;
int main() {
  int t;
  cin >> t;
  while (t--) {
    int n; cin >> n;
    ll a[n]; for (int i = 0; i < n; i++) cin >> a[i];
    int p1 = 0, p2 = 0, ans = 0;
    for (int i = 0; i < n; i++) {
      if (a[i] == 2) {
        p1 += p2;
        if (p1 > 0)
          ans = max(ans, (p1 + 2) / 2);
        p2 = 0;
      }
      else {
        p2++;
        if (p1 == 0)
          ans = max(ans, p2);
        else
          ans = max(ans, (p1 + 2) / 2 + p2);
      }
    }
    cout << ans << endl;
  }
}