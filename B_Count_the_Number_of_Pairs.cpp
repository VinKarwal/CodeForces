#include <bits/stdc++.h>
using namespace std;

int main() {
  int t;
  cin >> t;
  while (t--) {
    int n, k;
    cin >> n >> k;
    int a[2][26] = {0};
    string s;
    cin >> s;

    for (int i = 0; i < n; i++) {
      if (isupper(s[i]))
        a[0][s[i] - 'A']++;
      else
        a[1][s[i] - 'a']++;
    }

    int ans = 0, extra = 0;

    for (int i = 0; i < 26; i++) {
      ans += min(a[0][i], a[1][i]);
      extra += abs(a[0][i] - a[1][i]) / 2;
    }

    cout << ans + min(extra, k) << endl;
  }
  return 0;
}