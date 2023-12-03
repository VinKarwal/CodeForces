#include <bits/stdc++.h>
#define ll long long

using namespace std;
int main() {
    int t;
    cin >> t;
    while (t--) {
        ll count = 0;
        int pos = 0;
        string l, r;
        cin >> l >> r;
        while (l.length() != r.length()) l = '0' + l;
        for (int i = 0; i < r.length(); i++) {
            if (r[i] == l[i])
                continue;
            else if (r[i] != l[i]) {
                pos = i;
                break;
            }
        }
        count += abs(r[pos] - l[pos]);
        for (int i = pos + 1; i < r.length(); i++) {
            count += 9;
        }

        cout << (l == r ? 0 : count) << endl;
    }
}