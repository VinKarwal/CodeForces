#include <bits/stdc++.h>
#define ll long long
using namespace std;
int main() {
  int t;
  cin >> t;
  while (t--) {
    int n;
    cin >> n;
    string s;
    cin >> s;

    int c = *max_element(s.begin(), s.end()) - 'a';
    cout << c + 1 << endl;
  }
}