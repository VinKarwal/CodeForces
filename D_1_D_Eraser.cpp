#include <bits/stdc++.h>
using namespace std;

int main() {
  int t;
  cin >> t;
  while (t--) {
    int n, x, count = 0;
    cin >> n >> x;
    string s;
    cin >> s;
    int i = s.find('B');
    while ((i = s.find('B', i)) != string::npos) {
      if(s.find('B', i) != string::npos) count++;
      i+=x;
    }
    cout << count << endl;
  }
  return 0;
}