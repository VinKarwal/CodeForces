#include <bits/stdc++.h>
#define ll long long
using namespace std;

int main() {
  int n, m; cin >> n >> m;
  ll dorms[n], letter;
  for (int i = 0; i < n; i++) {
    cin >> dorms[i];
    i > 0 ? dorms[i] += dorms[i - 1] : dorms[i];
  }
  for (int i = 0; i < m; i++) {
    cin >> letter;
    int l = 0;
    int r = n - 1;
    while (l < r) {
      int mid = (l + r) / 2;
      if (dorms[mid] < letter) l = mid + 1;
      else r = mid;
    }
    cout << r + 1 << " " << (r == 0 ? letter : letter - dorms[r - 1]) << endl;
  }

  return 0;
}