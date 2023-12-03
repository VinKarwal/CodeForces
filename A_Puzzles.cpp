#include <bits/stdc++.h>
using namespace std;

int main() {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  int n, m, diff = INT_MAX;
  cin >> n >> m;
  int a[m];
  for (int i = 0; i < m; i++) {
    cin >> a[i];
  }
  sort(a, a+m);
  for (int i = 0; i <= m - n; i++) {
    
    int c = 
        (*max_element(a + i, a + (i + n)) - *min_element(a + i, a + (i + n)));
    if (c < diff) diff = c;
  }

  cout << diff << endl;

  return 0;
}