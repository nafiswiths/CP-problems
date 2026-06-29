#include <bits/stdc++.h>
using namespace std;

#define ll long long
void permutations(string str, int l) {
    if (l == str.size() - 1)
        cout << str << endl;
    else {
        for (int i = l; i < str.size(); i++) {
            swap(str[l], str[i]);
            permutations(str, l + 1);
            swap(str[l], str[i]); 
        }
    }
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
 string str;
    cin >> str;
    permutations(str, 0);
}