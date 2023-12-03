#include <bits/stdc++.h>
#define ll long long
using namespace std;
int main() {
  int t;
  cin >> t;
  while (t--) {
    int n, k, count = 0, pos = 0; cin >> n >> k;
    string s; cin >> s;
    char x;
    map<char, int> mp;
    for (int i = 0; i < n; i++) mp[s[i]]++;

    if (mp['B'] == k) {
      cout << 0 << endl;
      continue;
    }
    else if (mp['B'] > k) x = 'A';
    else x = 'B';

    cout << 1 << endl;
    for (int i = 0; i < n; i++) {
      if (s[i] != x) count++;
      if (count == mp['B'] - k + 1) {
        pos = i;
        break;
      }
    }
    cout << pos + 1 << " " << x << endl;
  }
}
// cout << s.find('B') + 1 << endl;
// for (int i = 0; i < n; i++) {
//   if (s[i] == 'B') count++;
//   if (count == mp['B'] - k) {
//     pos = i;
//     break;
//   }
// }
// cout << pos + 1;
// cout << " A" << endl;