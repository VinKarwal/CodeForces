#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n; cin >> n;
    string s = to_string(++n);
    set<int> us(s.begin(), s.end());
    while(s.size() != us.size()){
        n++;
        s = to_string(n);
        us.clear();
        us.insert(s.begin(), s.end());
    }

    cout << n << endl;
    return 0;
}