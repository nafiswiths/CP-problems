#include <iostream>
#include <vector>
#include <string>
using namespace std;

int main() {
    int R, C, K;
    cin >> R >> C >> K;
    vector<string> matrix(R), pattern(R);
    
    
    for (int i = 0; i < R; i++) {
        cin >> matrix[i] >> pattern[i];
    }
    
    bool can_scroll = false;

    // Try each possible starting column for the pattern
    for (int start_col = 0; start_col <= C - K; start_col++) {
        bool match = true;
        
        // Check if pattern matches matrix at this starting column
        for (int i = 0; i < R && match; i++) {
            for (int j = 0; j < K; j++) {
                if (pattern[i][j] == '*' && matrix[i][j + start_col] != '*') {
                    match = false;  // Pattern requires on, but matrix has off or broken LED
                    break;
                }
            }
        }
        
        if (match) {
            can_scroll = true;
            break;
        }
    }

    // Output result
    if (can_scroll) {
        cout << "Y" << endl;
    } else {
        cout << "N" << endl;
    }

    return 0;
}
