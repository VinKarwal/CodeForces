#include <iostream>
using namespace std;

int main(){
    int t;
    cin >> t;
    while(t--){
        int n;
        
        cin >> n;
        
        int a[500], b[500], maxq = 0, pos;
        
        for(int i=0; i<n; i++) {
            cin >> a[i] >> b[i];
        }

        for (int i = 0; i < n; i++){
            if(a[i] > 10){
                a[i] = b[i] = 0;
            } 
        }
        
        for (int i = 0; i < n; i++){
            if(maxq < b[i]){
                maxq = b[i];
                pos = i;
            }
        }
        
        cout << pos + 1 << endl;
    
    }
    return 0;
}