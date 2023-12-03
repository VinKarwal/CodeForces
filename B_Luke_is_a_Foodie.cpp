#include <bits/stdc++.h>
#define ll long long
using namespace std;
int main() {
  int t;
  cin >> t;
  while (t--) {
    int n, x; cin >> n >> x;
    int a, count = 0, l = 0, r = INT_MAX;
    for (int i = 0; i < n; i++) {
      cin >> a;
      l = min(l, a);
      r = max(r, a);
      if (r - l > 2 * x) {
        count++;
        l = a;
        r = a;
      }
    }
    cout << count - 1 << endl;
  }
}