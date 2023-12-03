#include <bits/stdc++.h>
using namespace std;

int main() {
    int x; cin >> x;
    int a[x];
    for (int i = 0; i < x; i++) {
      cin >> a[i];
    }
    int max = distance(a,max_element(a,a+x));
    int flag = 1;
    if(is_sorted(a,a+max) && is_sorted(a+max, a+x, greater<int>())) cout << "YES";
    else cout << "NO";
    cout << endl;
    return 0;
}
