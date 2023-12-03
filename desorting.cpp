#include <iostream>
#define INT_MAX       2147483647

using namespace std;
int main() {
    int t;
    cin >> t;
    while(t--){
        int n;
        cin >> n;
        int a[500];
        int diff, minD = INT_MAX;
        int count = 0;
        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
        }
        
        for(int i = 1; i < n; i++){
            diff = a[i] - a[i-1];
            if(minD > diff){
                minD = diff;
            }
        }

        while(minD >= 0){
            minD -= 2;
            count++;
        }
        cout << count << endl;
        
        // for(int i = 0; i <= minD+1; i++){
        //     count++;
        //     if(i <= i-1){
        //         flag = 0;
        //         break;
        //     }
        //     else if(i <= pos) a[i]++;
        //     else a[i]--;
        // }

        // for(int &i:a) 
        //     cout << i << " ";
        // cout << endl;
        }
    
    return 0;
}
