#include <iostream>
#include <vector>
#include <set>
#include <algorithm>

using namespace std;

int findMaxMEX(int n, int x, vector<int>& a) {
    set<int> reachable;
    
   
    for (int num : a) {
        reachable.insert(num);
    }

  
    int mex = 0;

    
    while (reachable.count(mex) > 0) {
        mex++;
    }

    
    for (int i = 0; i < mex; i++) {
        if (reachable.count(i) == 0) {
            
            return mex;
        }
    }

   
    while (true) {
        if (reachable.count(mex) > 0) {
            mex++;
        } else {
            break;
        }
    }
    
    return mex;
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    
    int t;
    cin >> t;
    
    while (t--) {
        int n, x;
        cin >> n >> x;
        vector<int> a(n);
        
        for (int i = 0; i < n; i++) {
            cin >> a[i];
        }
        if(findMaxMEX(n,x,a)%2 != 0)
        cout << findMaxMEX(n, x, a)+1 << '\n';
        else{
             cout << findMaxMEX(n, x, a) << '\n';

        }
    }
    
    return 0;
}
