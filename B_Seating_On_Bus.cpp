#include <bits/stdc++.h>
#define ll long long
using namespace std;

int main() {
  int n, m; cin >> n >> m;
  for (int i = 1; i <= 2 * n; i++) {
    if (2 * n + i <= m) cout << 2 * n + i << " ";
    if (i <= m) cout << i << " ";
  }
  return 0;
}