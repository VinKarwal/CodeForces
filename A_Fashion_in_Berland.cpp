#include <bits/stdc++.h>
using namespace std;

int main() {
    int n, a, count = 0; cin >> n;
    cin >> a;
    a==0 ? count ++ : count;
    if(n==1) count == 1 ? cout << "NO" << endl : cout << "YES" << endl;
    else {
      for (int i = 1; i < n; i++) {
        cin >> a;
        a == 0 ? count++ : count;
      }
      count != 1 ? cout << "NO" : cout << "YES";
      cout << endl;
    } 
    return 0;
}