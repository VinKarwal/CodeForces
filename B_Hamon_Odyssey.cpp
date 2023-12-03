#include <bits/stdc++.h>
#define ll long long
using namespace std;
int main() {
  int t;
  cin >> t;
  while (t--) {
    int n; cin >> n;
    int a[n]; for (int i = 0; i < n; i++) cin >> a[i];
    if (n == 1) { cout << 1 << endl; continue; }
    ll sum = a[0], c = 0;
    for (int i = 0; i < n; i++) {
      sum &= a[i];
      if (sum == 0) {
        c++;
        sum = (i + 1 < n ? a[i + 1] : 0);
      }
    }
    cout << (c == 0 ? 1 : c) << endl;
  }
}
