

#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        
        
        if (n == 1) {
            cout << "0" << endl;
            continue;
        }
        
        
        string ans(n, '0');
        
       
        ans[1] = '1';
        
        cout << ans << endl;
    }

    return 0;
}
