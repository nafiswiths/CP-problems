#include <bits/stdc++.h>
#include <vector>

using namespace std;

int main() {
    int t;
    cin >> t; 
    while (t--) {
        int n;
        cin >> n; 
        vector<int> a(n);
        
        for (int i = 0; i < n; i++) {
            cin >> a[i]; 
        }

        
        sort(a.begin(), a.end());

        
        int max= (a[n-1] + a[n-2]) / 2; 
        if((a[n-1]+a[n-2])%2 == 0)
        cout << max << endl; 
        else 
         cout << max-1 << endl; 
    }
    return 0;
}
