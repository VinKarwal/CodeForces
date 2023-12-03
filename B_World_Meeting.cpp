#include <bits/stdc++.h>
#define ll long long
using namespace std;
int main() {
    int n;
    cin >> n;
    vector<pair<int, int>> v(n);
    for (auto& [w, x] : v) {
        cin >> w >> x;
    }

    int ans = 0;
    for (int i = 0; i < 24; i++) {
        int tmp = 0;
        for (auto [w, x] : v) {
            if ((x + i) % 24 >= 9 && (x + i) % 24 <= 17) {
                tmp += w;
            }
        }
        ans = max(ans, tmp);
    }
    cout << ans << endl;
}