#include <bits/stdc++.h>
using namespace std;

#define ll long long

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    ll n;
    cin >> n;

    vector<ll> v(n);

    for (auto &x : v)
        cin >> x;

    sort(v.begin(), v.end());
    int l = 0, h = 1; 
    int ans = 0  ;
    while (h < n) {
      ans+= v[h] - v[l];
      h+=2;
      l+=2;
    }
    cout << ans << endl;
}