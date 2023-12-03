#include <bits/stdc++.h>
#define ll long long
using namespace std;
int main() {
  int t;
  cin >> t;
  while (t--) {
    int n; cin >> n;
    int a[n], b[n];
    for (int i = 0; i < n; i++) cin >> a[i], b[i] = a[i];
    if (n == 1) {
      cout << -1 << endl;
      continue;
    }
    sort(a, a + n);
    for (int i = 0; i < n - 1; i++) {
      if (a[i] == b[i]) {
        swap(a[i], a[i + 1]);
      }
    }
    if (a[n - 1] == b[n - 1]) swap(a[n - 1], a[n - 2]);
    for (int i = 0; i < n; i++) cout << a[i] << " ";
    cout << endl;
  }
}