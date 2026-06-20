#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;

    while (t--) {
        long long n, k;
        cin >> n >> k;
        vector<int> v(n);

        for (int i = 0; i < n; i++) {
            cin >> v[i];
            
        }

        // sort(v.begin(), v.end());
        int ans = 0;
        int prev_size = -1;

        while (true) {
            int current_size = v.size();

            if (current_size == prev_size) {
                ans = current_size;
                break;
            }

            prev_size = current_size;

           
            for (int i = 0; i < v.size(); ) {
                v[i]=v[i]*2;
                if (v[i] <= k) {
                    v.erase(v.begin() + i);
                } else {
                    i++;
                }

            }
        }

        cout << ans << endl;
    }

    return 0;
}
