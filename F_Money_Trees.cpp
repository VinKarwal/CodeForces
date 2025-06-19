#include <bits/stdc++.h>
using namespace std;

int main() {
  
  int t;
  cin >> t;
  while (t--) {
    int n, x;
    cin >> n >> x;
    int h[n], a[n];
    for (int i = 0; i < n; i++) cin >> a[i];

    for (int i = 0; i < n; i++) cin >> h[i];

    int m, sum = 0;
    int i = 0;
    while (sum <= x) {
      sum += a[i];
      i++;
      m = i;
    }
    // cout << sum << endl;
    // cout << m << endl;
    int count = 1;
    for (int i = 1; i < m - 1; i++) {
      if (h[i - 1] % h[i] == 0) count++;
    }
    cout << count << endl;
  }
  return 0;
}