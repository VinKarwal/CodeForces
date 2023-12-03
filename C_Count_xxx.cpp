#include <bits/stdc++.h>
#define ll long long
using namespace std;

int main() {
  int n; cin >> n;
  string s; cin >> s;
  char c = s[0];
  map<char, int> m;
  int count = 0;
  for (auto&& i : s) {
    if (i == c) {
      count++;
    }
    else {
      m[c] = max(m[c], count);
      c = i;
      count = 1;
    }
  }

  m[c] = max(m[c], count);

  int sum = 0;
  for (auto&& i : m) {
    sum += i.second;
  }

  cout << sum << endl;

  return 0;
}