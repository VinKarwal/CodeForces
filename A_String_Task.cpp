#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    string s; cin >> s;
    string vowel = "aeiouyAEIOUY";
    for (int i = 0; i < s.size(); i++) {
        if(!(find(vowel.begin(), vowel.end(), s[i]) != vowel.end())){
            s[i] = tolower(s[i]);
            cout << "." << s[i];
        }
    }
    cout << endl;

    return 0;
}