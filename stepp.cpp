#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;
    while(t--) {
        long long x, y;
        cin >> x >> y;

        if(x == 0 && y == 0) {
            cout << 0 << endl;
            continue;
        }

        
        if(y > x) {
            cout << 2 << endl;
            
        }

        else if(x-y ==0 || x-y == -1){
            cout<<-1<<endl;
        }
       
         else if(x>y) {
            if(x-1> y && y>1){
            cout << 3 << endl;
            }
        else {
            cout << -1 << endl;
        }
        }
    }
    return 0;
}
