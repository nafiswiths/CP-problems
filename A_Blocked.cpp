#include <bits/stdc++.h>
using namespace std;

int main() {
    
    int t;
    cin >> t;

    while (t--) {
        int n;
        cin >> n;

        vector<int> a(n);
        for (int &x : a) cin >> x;

     
        sort(a.rbegin(), a.rend());

        int mx = 20000;
        vector<bool> cck(mx + 1, false);
        cck[0] = true;

        vector<int> ans;
        bool ok = true;

        for (int x : a) {
            if (cck[x]) { 
                ok = false;
                break;    
            }
                                                    
            ans.push_back(x);

          
            for (int s = mx - x; s >= 0; s--) {                                   
                if (cck[s]) {
                    cck[s + x] = true;
                }
            }
        }

        if (!ok) {
            cout << -1 << '\n';
        } else {
            for (int x : ans) cout << x << " ";
            cout << '\n';
        }
    }

    return 0;
}