#include <bits/stdc++.h>

#include <cmath>
#include <iostream>
int main() {
  int t;
  std::cin >> t;
  while (t--) {
    long long int n;
    std::cin >> n;

    (n % 2 == 0 && n >= 4)
        ? (n /= 2, std::cout
                       << (n / 3 == 0 ? 1 : (n % 3 == 0 ? n / 3 : (n / 3) + 1))
                       << " " << n / 2)
        : std::cout << -1;
    std::cout << std::endl;
  }
  return 0;
}
