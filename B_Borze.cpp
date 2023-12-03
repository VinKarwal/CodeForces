#include <bits/stdc++.h>
using namespace std;

int main() {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  string s, a = "";
  cin >> s;

  for (int i = 0; i < s.size();) {
    if(s.find('.', i) < s.find("-.", i) && s.find('.', i) < s.find("--", i)) a+='0', i++;
    if(s.find("-.", i) < s.find('.', i) && s.find("-.", i) < s.find("--", i)) a+='1', i+=2;
    if(s.find("--", i) < s.find('.', i) && s.find("--", i) < s.find("-.", i)) a+='2', i+=2;
  }

  cout << a << endl;
  return 0;
}