#include <bits/stdc++.h>

#include <iostream>
#include <vector>
using namespace std;
int main() {
  int n;
  bool arithmetic = true;
  cin >> n;
  vector<int> ap(n + 1, 0);
  for (int i = 0; i < n; i++) cin >> ap[i];

  int d = ap[1] - ap[0];

  for (int i = 0; i < ap.size() - 1; i++) {
    if (ap[i] != (ap[0] + (i * d))) {
      arithmetic = false;
      break;
    }
  }
  arithmetic == true ? cout << ap[n - 1] + d : cout << ap[n - 1];
  cout << endl;
  return 0;
}
