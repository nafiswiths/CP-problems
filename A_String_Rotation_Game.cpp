#include<bits/stdc++.h>
using namespace std;
#define ll long long 

int main(){
    int t ;
    cin>>t;
    while(t--){
       int n ;
       cin>>n;
       string s ;
       cin>>s;

       int b = 1 ;
        int len=1;
       int mx = 1 ;

     

       for(int i = 1 ; i < n ; i++){
     
          
            if(s[i] != s[i-1]){
                b++;
                len=1;
            }
            else {
                len++;
                if(len > mx) mx = len;
                
               
            }
       }

       if(s[0] == s[n-1]){
            cout << b << endl;
       }
       else{
            if(mx > 1){
                cout << b+1 << endl;
            }
            else{
                cout << b << endl;
            }
       }
    }
}