#include <bits/stdc++.h>
using namespace std;

int main() {
  int t;
  cin >> t;
  while (t--) {
    int n;
    cin >> n;
    int a[n];
    for (int i = 0; i < n; i++) cin >> a[i];
    sort(a, a + n);
    int count = a[0] == 0 ? 1 : 2;

    for (int i = 0; i < n - 1; i++) {
      a[i] <= i&& a[i + 1] > i + 1 ? count++ : count;
    }

    cout << count << endl;
  }
  return 0;
}