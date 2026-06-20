

#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        vector<int > v(n);
        for(int i= 0  ; i<n; i++){
            cin>>v[i];
        }
        int ans = 0 ;
        int count = 1; 


    for (int i = 1; i < n; i++) {
        if (v[i] == v[i - 1]) {
            count++;  
        } else {
           
            if (count > 1) {
                ans += count/2 ; 
            }
            count = 1; 
        }
    }

    
    if (count > 1) {
        ans += count/2 ; 
    }
    cout<<count<<endl;
}
      
        
        
       
   

    return 0;
}
