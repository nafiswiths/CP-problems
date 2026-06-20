#include <bits/stdc++.h>
using namespace std;
int main(){
     int t;
    cin>>t ; 
    while(t--){
    int  n ;
    cin>>n;
    int arra[n],ans = 0 ;
    
    for(int i =0;i< n  ;i++){
cin>>arra[i];

    }
    int m = arra[n-1];
    for(int i = n-2 ; i>=0 ;i--){
       
        if(arra[i] >m){
            ans++;  ;  
               } m=min(m,arra[i]);
        
        }
    
    cout<<ans<<endl;
    
    }
    
    return 0 ;
}