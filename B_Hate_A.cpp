#include <bits/stdc++.h>
using namespace std;

int main() {
  string s;
  cin >> s;
  string s1 = s.substr(0, s.rfind('a') + 1);
  string s2 = s.substr(s.rfind('a') + 1, s.length());
  s1.erase(remove(s1.begin(), s1.end(), 'a'), s1.end());
  if (s1 == s2) {
    cout << s.substr(0, s.length() - s2.length()) << endl;
  } else if (s1.length() < s2.length()) {
    int diff = s2.length() - s1.length();
    s1 += s2.substr(0, diff / 2);
    s2.erase(0, diff / 2);

    s1 == s2 ? cout << s.substr(0, s.length() - s2.length()) << endl
             : cout << ":(" << endl;
  } else {
    cout << ":(" << endl;
  }
  return 0;
}