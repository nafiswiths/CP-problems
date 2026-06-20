#include <iostream>
#include <string>
using namespace std;

int main() {
    int x, count = 0;
    cin >> x;

    for (int i = 1; i < x; i++) {
        
        count++;
    }

    cout << count << endl;

    return 0;
}
