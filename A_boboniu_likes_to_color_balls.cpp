#include <iostream>
#include <ostream>
int main() {
  int t;
  std::cin >> t;
  while (t--) {
    long long int r, g, b, w;
    std::cin >> r >> g >> b >> w;
    bool ans = false;
    if ((r - 1) % 2 + (g - 1) % 2 + (b - 1) % 2 + (w + 3) % 2 <= 1 && r > 0 &&
        g > 0 && b > 0)
      ans = true;
    else if ((r % 2 + g % 2 + b % 2 + w % 2) > 1)
      ans = false;
    else
      ans = true;

    ans == true ? std::cout << "Yes" : std::cout << "No";
    std::cout << std::endl;
  }
  return 0;
}
