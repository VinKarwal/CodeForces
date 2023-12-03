#include <bits/stdc++.h>

#include <iostream>
#include <string>
int main() {
  int t;
  std::cin >> t;
  while (t--) {
    int n, b = 0, count = 0, val = 9;
    std::cin >> n;
    std::string s = std::to_string(n);
    for (int i = 1; i <= s.size(); i++) {
      b = b * 10 + 1;
      for (int j = 1; j <= 9; j++) {
        if (b * j < n) count++;
      }
    }
    std::cout << count << std::endl;
  }
  return 0;
}
