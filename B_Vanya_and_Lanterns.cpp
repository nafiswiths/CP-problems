
        
#include <bits/stdc++.h>
using namespace std;

int main() {
    int n, x;
    cin >> n >> x;
    vector<int> d(n);
    
    for (int i = 0; i < n; i++) {
        cin >> d[i];
    }
    
    sort(d.begin(), d.end());
    
    
    if (n == 1) {
        cout << fixed << setprecision(10) << max((double)d[0], (double)(x - d[0])) << endl;
        return 0;
    }
    
    
    double max_gap = d[0] - 0; 
    
    
    for (int i = 0; i < n - 1; i++) {
        max_gap = max(max_gap, (d[i + 1] - d[i]) / 2.0); 
    }
    
    
    max_gap = max(max_gap, (double)(x - d[n - 1]));
    
   
    cout << fixed << setprecision(10) << max_gap << endl;
    
    return 0;
}
