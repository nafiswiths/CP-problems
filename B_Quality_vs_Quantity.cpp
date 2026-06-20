#include <bits/stdc++.h>
using namespace std;

int main() {
   

    int t; cin >> t;
    while (t--) {
        long long n;
        cin>>n;
        vector <long long> v(n);
        for(int i  = 0  ; i< n  ; i++){
            cin>>v[i];
        } 
        sort(v.begin(),v.end());
        long long s1=v[0]+v[1] , s2=v[n-1] , c1=2 , c2=1;
        
        int l = 2 ,r=n-2;
        int ans=0 ;
         if(s2>s1 && c1>c2) {
                
                ans=1 ; 
              
                }
                else{
        while(l<=r){
             s1+=v[l];
            s2+=v[r];
            
            
            if(s2>s1 ) {
                
                ans=1 ; 
                break;
                }
               r--;
               l++;

                
                
            }
        }
        
        if(ans){
            cout<<"YES"<<endl;
        }
        else{
            cout<<"NO"<<endl;
        }
    }
}