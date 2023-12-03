#include <iostream>
using namespace std;
int main() {
  string s;
  cin >> s;
  int flag = 1;
  for (int i = 0; i < s.size() - 1; i++) {
    if (s[i] <= s[i + 1]) {
      flag = 0;
      break;
    }
  }
  flag == 1 ? cout << "Yes" << endl : cout << "No" << endl;
  return 0;
}