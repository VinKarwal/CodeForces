#include <bits/stdc++.h>
using namespace std;

void solve() {
  int ab = 0, ba = 0;
  string s; cin >> s;
  
  int ab_i = s.find("ab");
  while( ab_i != string::npos){
    ab_i =s.find("ab", ab_i + 2);
    ab++;
  }
  
  int ba_i = s.find("ba");
  while( ba_i != string::npos){
    ba_i =s.find("ba", ba_i + 2);
    ba++;
  }
  
  if (ab == ba) cout << s << endl;
  else if (ab > ba) s.at(s.find_last_of("ab")) = 'a', cout << s << endl;
  else s.at(s.find_last_of("ba")) = 'b', cout << s << endl;
}

int main() {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  int t;
  cin >> t;

  while (t--) {
    solve();
  }

  return 0;
}