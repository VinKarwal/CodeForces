#include <bits/stdc++.h>
#include <bits/stdc++.h>

#define ll long long
using namespace std;
int main() {
  int t;
  cin >> t;
  while (t--) {
    int n, ans = 0; cin >> n;
    char a; cin >> a;
    string s; cin >> s;
    s = s + s;

    int pos = -1;
    for (int i = n * 2 - 1; i >= 0; i--) {
      if (s[i] == 'g') {
        pos = i;
      }
      if (s[i] == a && pos != -1) {
        ans = max(ans, pos - i);
      }
    }

    cout << ans << endl;
  }
}