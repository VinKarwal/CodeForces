#include <bits/stdc++.h>
using namespace std;

int main() {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  int n;
  cin >> n;
  if (n % 2 != 0)
    cout << -1;
  else {
    int i = 1;
    while (i <= n) {
      cout << ++i << " ";
      i -= 2;
      cout << ++i << " ";
      i += 2;
    }
  }
  cout << endl;
  return 0;
}