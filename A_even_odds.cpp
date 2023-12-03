#include <bits/stdc++.h>
using namespace std;
int main() {
  long long int n, pos;
  cin >> n >> pos;
  (n % 2 == 0) ? (pos <= (n / 2) ? cout << 1 + ((pos - 1) * 2)
                                 : cout << 2 * (pos - (n / 2)))
               : (pos <= (n / 2) + 1 ? cout << 1 + ((pos - 1) * 2)
                                     : cout << 2 * (pos - (n / 2) - 1));
  cout << endl;
  return 0;
}
