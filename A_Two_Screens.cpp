#include <iostream>
#include <string>
#include <algorithm>
using namespace std ;

int main() {
    int q;
    cin >> q;
    while (q--) {
        std::string s, t;
        std::cin >> s >> t;
        
        int n = s.size();
        int m = t.size();
        if(t[0] != s[0] || t[1] != s[1]){
            cout<<n+m<<endl;
        }
        else{
            int  count = 0 ; 
            for(int i = 0 ; i< min(m,n);i++){
                if(s[i]!=t[i]){
                    break;
                }
                count++;
            }
            cout<<m+n-count+1<<endl;
        }
        
    }
    return 0;
}
