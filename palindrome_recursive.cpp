// Palindrome using recursion

#include <iostream>
#include <string>
#define n s.length()
using namespace std;
int rev(string s, int i) {
  if (i >= n / 2) return 1;
  if (s[i] != s[n - i - 1]) return 0;
  return rev(s, i++);
}
int main() {
  string s = "racecar";
  rev(s, 0) ? cout << "Yes" : cout << "No";
  return 0;
}
