#include <bits/stdc++.h>
using namespace std;

int main() {
  int n;
  cin >> n;
  int x[n], y[n], z[n];

  for (int i = 0; i < n; i++) cin >> x[i] >> y[i] >> z[i];
  int init = 0;
  if (accumulate(x, x+n, init) == 0 &&
      accumulate(y, y+n, init) == 0 && 
      accumulate(z, z+n, init) == 0)
    cout << "YES" << endl;
  else
    cout << "NO" << endl;

  return 0;
}