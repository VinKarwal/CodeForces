#include <iostream>

using namespace std;

int main(){
    int t;
    string s;
    cin >> t;
    while(t--){
        string ch;
        for (int j = 0; j < 8; j++){
            cin >> ch;
            for(int i=0; i<8; i++){
                if(ch[i] == '.') continue;
                else s.push_back(ch[i]);
            }
        }
        s += " ";
    }
    cout << s << endl;
    return 0;
}