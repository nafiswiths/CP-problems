#include <bits/stdc++.h>
using namespace std;

int main() {
   

    int t; cin >> t;
    while (t--) {
        int n;
        long long m;
        cin >> n >> m;

        vector<long long> a(n);
        for(int i = 0 ; i<n ;i++){
            cin>>a[i];
        }
        unordered_set<long long> ss;

        for (int i = 0; i < n; i++) {
            long long p = (a[i] + (i + 1)) % m;
            ss.insert(p);
        }

        if ((long long)ss.size() == m)
            cout << "NO\n";
        else
            cout << "YES\n";
    }
}