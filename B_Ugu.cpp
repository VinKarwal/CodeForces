#include <bits/stdc++.h>
#define ll long long int
using namespace std;

int main() {
  int t;
  cin >> t;
  while (t--) {
    int n, count = 0;
    cin >> n;
    string s;
    cin >> s;
    if (is_sorted(s.begin(), s.end()))
      cout << 0 << endl;
    else {
      for (int i = 1; i < n; i++) {
        if (s[i] != s[i - 1]) count++;
      }
      s[0] == '0' ? cout << --count << endl : cout << count << endl;
    }
  }
  return 0;
}