#include <bits/stdc++.h>
using namespace std;

int main() {
  int t;
  cin >> t;
  while (t--) {
    int arr[10][10], ans = 0;
    char c;

    for (int i = 0; i < 10; i++) {
      for (int j = 0; j < 10; j++) {
        cin >> c;
        if (c == 'X') ans += min(min(i, 9 - i), min(j, 9 - j)) + 1;
      }
    }
    cout << ans << endl;
  }
  return 0;
}