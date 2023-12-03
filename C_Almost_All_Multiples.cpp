#include <bits/stdc++.h>
using namespace std;

void solve() {
  int n, x; cin >> n >> x;

  if(n%x !=0) cout << -1 << endl;
  
  else {
    cout << x << " ";
    for (int i = 2; i < n; i++) {
      if(i == x) cout << n << " ";
      else cout << i << " ";
    }
    cout << 1 << endl;
  }
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