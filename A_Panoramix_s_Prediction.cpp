#include <bits/stdc++.h>
using namespace std;

int main() {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  int a, b, flag = 1, count, pcount = 0;
  cin >> a >> b;

isPrime:
  for (int i = a + 1; i <= b; i++) {
    count = 0;
    for (int j = 2; j < i; j++) {
      if (i % j == 0) count++;
    }
    // cout << i << ' ' << count << endl;
    if (count == 0) {
      pcount++;
    } else if (count > 0 && i == b) {
      pcount = 0;
    }
  }

  pcount == 1 ? cout << "YES" : cout << "NO";
  cout << endl;

  return 0;
}