#include <iostream>
#include <vector>
using namespace std;

int main() {
    long long t;
    cin >> t;
    while (t--) {
        long long  n;
        cin >> n;
        vector <long > v ;
        long long  sum = 0;
        for (long long i = 0; i < n-1; i++) {
            long long  x;
            cin >> x;
            v.push_back(-1*x) ;
        }
        
        for (long long  i = 0; i < n-1; i++) {
            sum+=v[i];
        }

         cout << sum << endl;
    }
    
    return 0;
}
