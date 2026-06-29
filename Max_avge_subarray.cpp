<<<<<<< HEAD
#include <bits/stdc++.h>
using namespace std;

#define ll long long

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    ll n, k;
    cin >> n >> k;

    vector<ll> v(n);

    for (auto &x : v)
        cin >> x;

    ll currentSum = 0;

    for (int i = 0; i < k; i++)
        currentSum += v[i];

    ll maxSum = currentSum;

    for (int i = k; i < n; i++) {
        currentSum += v[i];
        currentSum -= v[i - k];
        maxSum = max(maxSum, currentSum);
    }

    cout <<setprecision(5)<< (double)maxSum / k << '\n';
=======
#include <bits/stdc++.h>
using namespace std;

#define ll long long

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    ll n, k;
    cin >> n >> k;

    vector<ll> v(n);

    for (auto &x : v)
        cin >> x;

    ll currentSum = 0;

    for (int i = 0; i < k; i++)
        currentSum += v[i];

    ll maxSum = currentSum;

    for (int i = k; i < n; i++) {
        currentSum += v[i];
        currentSum -= v[i - k];
        maxSum = max(maxSum, currentSum);
    }

    cout <<setprecision(5)<< (double)maxSum / k << '\n';
>>>>>>> adc0717ab3a705367261825e72cf851480e0435d
}