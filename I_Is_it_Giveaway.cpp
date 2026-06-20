#include <iostream>
#include <vector>
#include <string>

using namespace std;

char canDisplayPattern(int R, int C, int K, const vector<string>& matrix, const vector<string>& pattern) {
    for (int r = 0; r < R; ++r) {
        for (int i = 0; i < K; ++i) {
            // Calculate the index for the matrix considering scrolling
            int matrixIndex = C - 1 - i;  // Rightmost position in the matrix
            int patternIndex = K - 1 - i;  // Current position in the pattern

            // If the pattern requires a turned-on LED
            if (pattern[r][patternIndex] == '*') {
                // Check if the corresponding matrix LED is broken
                if (matrixIndex >= 0 && matrix[r][matrixIndex] == '-') {
                    return 'N';  // Not displayable due to broken LED
                }
            }
        }
    }
    return 'Y';  // All checks passed
}

int main() {
    int R, C, K;
    cin >> R >> C >> K;
    
    vector<string> matrix(R);
    vector<string> pattern(R);

    for (int i = 0; i < R; ++i) {
        cin >> matrix[i] >> pattern[i];
    }

    char result = canDisplayPattern(R, C, K, matrix, pattern);
    cout << result << endl;

    return 0;
}
