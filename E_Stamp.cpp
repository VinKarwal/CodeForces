#include <bits/stdc++.h>
#define ll long long
using namespace std;

int main() {
  int N, M; cin >> N >> M;
  string S, T; cin >> S >> T;
  string X(N, '#');

  for (int i = 0; i <= N - M; i++) {
    bool match = true;
    for (int j = 0; j < M; j++) {
      if (S[i + j] != T[j]) {
        match = false;
        break;
      }
    }
    if (match) {
      fill(X.begin() + i, X.begin() + i + M, '#');
      copy(T.begin(), T.end(), X.begin() + i);
    }
  }

  if (X == S) {
    cout << "Yes" << endl;
  }
  else {
    cout << "No" << endl;
  }

  return 0;
}