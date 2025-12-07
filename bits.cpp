#include <bits/stdc++.h>
using namespace std;

struct demo {
    unsigned int x : 1;
};

int main() {
    struct demo d;
    int n; cin >> n;
    d.x = n;
    cout << setprecision(2) << d.x << endl;
    return 0;
}