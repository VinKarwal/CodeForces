#include <bits/stdc++.h>
using namespace std;

int main() {
    int n, k; cin >> n >> k;
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            cout << (i == j ? k : 0) << " ";
        }
        cout << endl;
    }
    return 0;
}