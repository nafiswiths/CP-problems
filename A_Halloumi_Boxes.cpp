#include<bits/stdc++.h>
using namespace std; 

int main() {
    int t; 
    cin >> t; 
    while(t--) {
        int k, n; 
        cin >> k >> n;
        
        int ara[k];
        for(int i = 0; i < k; i++) {
            cin >> ara[i];
        }
        int sort = 1 ;
        for(int i = 1; i < k; i++) {
            if(ara[i-1]> ara[i]){
                sort=0;
                break ; 
            }
        }
        
        if(n == 1 && sort == 1 ) {
            cout << "YES\n";
        } else if(n>=2 ) {
            cout << "YES\n";
        }
        else{
             cout << "NO\n";
        }
    }
    return 0;
}
