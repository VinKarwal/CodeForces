#include <bits/stdc++.h>
#define ll long long
using namespace std;

double dis(int x1, int y1, int x2, int y2) {
    return sqrt(pow(x1 - x2, 2) + pow(y1 - y2, 2));
}

int main() {
    int t;
    cin >> t;
    while (t--) {
        int px, py, ax, ay, bx, by;
        cin >> px >> py >> ax >> ay >> bx >> by;

        double d1 = max(dis(ax, ay, 0, 0), dis(ax, ay, px, py));
        double d2 = max(dis(bx, by, 0, 0), dis(bx, by, px, py));
        double d = max({ min(dis(ax, ay, px, py), dis(bx, by, px, py)), min(dis(ax, ay, 0, 0), dis(bx, by, 0, 0)), dis(ax, ay, bx, by) / 2 });
        double ans = min({ d1, d2, d });
        cout << setprecision(11) << ans << endl;
    }
}