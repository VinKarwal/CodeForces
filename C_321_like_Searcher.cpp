#include <bits/stdc++.h>
using namespace std;
int j = 0;
int x;
string arr[100000];
void findStrictlyDecreasingNum(int start, std::string out, int n) {
  for (int i = start; i >= 0; --i) {
    std::string str = out + std::to_string(i);

    findStrictlyDecreasingNum(i - 1, str, n - 1);
  }
  arr[j] = out;
  j++;
  sort(arr, arr + j);
}

int main() {
  int n = 5;
  cin >> x;
  findStrictlyDecreasingNum(9, "", n);
  cout << arr[x - 1] << endl;
  return 0;
}