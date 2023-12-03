#include <cstring>
#include <iostream>
using namespace std;
int main() {
  string s;
  int count = 1;
  cin >> s;
  string s1 = s.back() + s.substr(0, s.size() - 1);
  for (int i = 0; i < s.size(); i++) {
    if (s1 == s)
      break;
    else {
      string t = s1.back() + s1.substr(0, s.size() - 1);
      s1 = t;
      count++;
    }
  }
  cout << count << endl;

  return 0;
}
