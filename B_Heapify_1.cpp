#include <bits/stdc++.h>
using namespace std;

int poso(int x) {
    while (x % 2 == 0) 
    {x /= 2;
    }
    return x;
}

int main() {
    int t;
    cin >> t;

    while (t--) {
        int n;
        cin >> n;

        vector<int> v(n + 1);

        for (int i = 1; i <= n; i++) {
            cin >> v[i];
        }

        bool ans = true;

        for (int i = 1; i <= n; i++) {
            if (poso(i) != poso(v[i])) {
                ans = false;
                break;
            }
        }

        cout << (ans ? "YES\n" : "NO\n");
    }
}
