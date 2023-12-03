#include <bits/stdc++.h>
#define ll long long
using namespace std;
int main() {
  int t;
  cin >> t;
  while (t--) {
    int n, k; cin >> n >> k;
    int i = 1, dif = 1;
    while (n--) {
      cout << i << " ";
      if (k - (i + dif) >= n - 1) {
        i += dif;
        dif++;
      }
      else {
        i++;
      }
    }
    cout << endl;
  }
}