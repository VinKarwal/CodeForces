// #include <bits/stdc++.h>

#include <iostream>

using namespace std;

int main() {
  int t;
  cin >> t;
  while (t--) {
    long int n;
    cin >> n;
    while (n > 0) {
      n % 2020 == 0 ? n -= 2020 : n -= 2021;
    }
    n == 0 ? cout << "YES" << endl : cout << "NO" << endl;
  }

  return 0;
}
