#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;
    int val = 0;
    while (t--) {
        string s;
        cin >> s;
        s == "X++" || s == "++X" ? val++ : val--;
    }
    
    cout << val;
    return 0;
}