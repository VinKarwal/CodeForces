#include <bits/stdc++.h>
using namespace std;

int main() {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  int n, t;
  cin >> n >> t;
  string s;
  cin >> s;

  while (t--) {
    for (int i = s.size(); i >= 0; i--) {
      if (s[i] == 'B' && i < s.size() - 1) swap(s[i], s[i + 1]), i--;
    }
  }

  cout << s << endl;
  return 0;
}