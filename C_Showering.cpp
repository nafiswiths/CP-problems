#include <bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    
    int t;
    cin >> t;
    
    while (t--) {
        int n, s, day;
        cin >> n >> s >> day;
        
        pair<int, int> p[n];
        for (int i = 0; i < n; i++) {
            cin >> p[i].first >> p[i].second;
        }
        
        bool possible = false;
        
        
        if (p[0].first >= s) {
            possible = true;
        }
        
        else if (day - p[n - 1].second >= s) {
            possible = true;
        }
        
        else {
            for (int i = 0; i < n - 1; i++) {
                if (p[i + 1].first - p[i].second >= s) {
                    possible = true;
                    break; 
                }
            }
        }
        
        
        if (possible) {
            cout << "YES" << endl;
        } else {
            cout << "NO" << endl;
        }
    }
    
    return 0;
}
