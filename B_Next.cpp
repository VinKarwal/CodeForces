#include <bits/stdc++.h>
#define ll long long
using namespace std;

int main() {
  int n; cin >> n;
  set<int> s;
  for (int i = 0; i < n; i++) {
    int a; cin >> a;
    s.insert(a);
  }
  cout << *(prev(s.end(), 2)) << endl;

  return 0;
}