#include <iostream>
using namespace std;

int main() {
    int t;
    cin >> t;
    while (t--) {
        int a, b;
        cin >> a >> b;

        
        int sum = a + 2 * b;

        
        if (sum % 2 == 0) {
            int target = sum / 2;
            
            if (target <= a + b && target >= 0) {
                cout << "YES" << endl;
            } else {
                cout << "NO" << endl;
            }
        } else {
            cout << "NO" << endl;
        }
    }
    return 0;
}
