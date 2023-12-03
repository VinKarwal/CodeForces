#include <iostream>
#include <ostream>
int main() {
  int n;
  std::cin >> n;
  n % 2 == 0 && n > 2 ? std::cout << "YES" << std::endl
                      : std::cout << "NO" << std::endl;
}
