
        
#include <bits/stdc++.h>
using namespace std;

int main() {
    int t ;
    cin>>t;
    while(t--){
        int n;
        string wa ; 
        cin>>n >> wa ; 
        int ans = 0 ;
        int count = 0 ; 

        for(int i =  1 ; i<n-1 ; i++){
            if(wa[i]=='.' && wa[i-1]=='.'&& wa[i+1]=='.'){
   
                ans = 1 ;
                break ; 
            }
        } 
        if(ans){
            cout<<2<<endl;
            continue;
        }
        else {
        for(int i  = 0  ; i< n ; i++) {
            if(wa[i]=='.'){
                count++;
            }
        }   
        cout<<count<<endl;
        }
    }
    return 0;
}
