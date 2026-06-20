#include <bits/stdc++.h>
using namespace std;

bool pel(long long n) {
    string str = to_string(n);
    string rev = string(str.rbegin(), str.rend());
    return (str == rev);
}

int main() {
    long long n, k; 
    cin >> n >> k; 
    long long ara[n]; 

    for (long long i = 0; i < n; i++) {
        cin >> ara[i];
    }

    long long count = 0;

    for (long long i = 0; i < n; i++) {
        if (pel(ara[i])) {
            cout << "Happy" << endl; 
            count = 0; 
        } else {
            count++; 
            if (count >= k) {
                cout << "Unhappy" << endl; 
            } else {
                cout << "Neutral" << endl; 
            }
        }
    }
   
    return 0;
}
