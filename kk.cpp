#include <iostream>
#include <vector>
using namespace std;

void computeLPS(string P, vector<int>& lps) {
    int m = P.size();
    int len = 0;
    lps[0] = 0;

    for (int i = 1; i < m;) {
        if (P[i] == P[len]) {
            len++;
            lps[i] = len;
            i++;
        } else {
            if (len != 0)
                len = lps[len - 1];
            else {
                lps[i] = 0;
                i++;
            }
        }
    }
}

int main() {
    string S, P;
    getline(cin, S);
    getline(cin, P);

    int n = S.size(), m = P.size();
    vector<int> lps(m);
    computeLPS(P, lps);

    int i = 0, j = 0;
    bool found = false;

    while (i < n) {
        if (S[i] == P[j]) {
            i++;
            j++;
        }

        if (j == m) {
            cout << "Matched at " << (i - m) << endl;
            found = true;
            j = lps[j - 1];
        }
        else if (i < n && S[i] != P[j]) {
            if (j != 0)
                j = lps[j - 1];
            else
                i++;
        }
    }

    if (!found)
        cout << "Not found" << endl;

    return 0;
}
