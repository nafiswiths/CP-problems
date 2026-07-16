#include <bits/stdc++.h>
using namespace std;

int dp[1005];
vector<int> price;

int func(int len) {
    if (len == 0)
        return 0;

    if (dp[len] != -1)
        return dp[len];

    int ans = 0;

    for (int cut = 1; cut <= len; cut++) {
        ans = max(ans, price[cut - 1] + func(len - cut));
    }

    return dp[len] = ans;
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n;
    cin >> n;

    price.resize(n);
    for (int i = 0; i < n; i++)
        cin >> price[i];

    memset(dp, -1, sizeof(dp));

    cout << func(n) << '\n';

    return 0;
}