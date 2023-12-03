#include <bits/stdc++.h>
#define ll long long
using namespace std;

int main() {
  int n, ans = 0; cin >> n;
  string s; cin >> s;
  set<char> ch;
  for (int i = 0; i < n; i++) {
    if (!isupper(s[i])) {
      ch.insert(s[i]);
    }
    else {
      ans = max(ans, (int)ch.size());
      ch.clear();
    }
  }
  ans = max(ans, (int)ch.size());
  cout << ans << endl;
  return 0;
}