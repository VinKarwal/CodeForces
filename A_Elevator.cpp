#include <bits/stdc++.h>

#include <iostream>
#include <string>
#define TxtIO                       \
  freopen("input.txt", "r", stdin); \
  freopen("output.txt", "w", stdout);
int main() {
  TxtIO;
  std::string door;
  int rail;
  std::cin >> door >> rail;

  (door == "front" && rail == 1) || (door == "back" && rail == 2)
      ? std::cout << "L\n"
      : std::cout << "R\n";

  return 0;
}
