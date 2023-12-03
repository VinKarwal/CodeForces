#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int m[5][5], pos_i, pos_j;
    for (int i = 0; i < 5; i++) {
        for (int j = 0; j < 5; j++) {
            cin >> m[i][j];
            if(m[i][j]==1) pos_i=i, pos_j=j;
        }
    }

    int diff = abs(3-(pos_i+1)) + abs(3-(pos_j+1));
    cout << diff << endl;

    return 0;
}