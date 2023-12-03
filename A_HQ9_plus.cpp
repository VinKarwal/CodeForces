#include <bits/stdc++.h>

#include <iostream>
#include <ostream>
#include <string>
int main() {
  std::string s;
  std::cin >> s;
  s.find('H') != -1 || s.find('Q') != -1 || s.find('9') != -1
      ? std::cout << "YES"
      : std::cout << "NO";
  std::cout << std::endl;
  return 0;
}
