#include<bits/stdc++.h>
using namespace std ;


int main (){
    int t ; 
    cin>> t  ; 
    while(t--){
        long long n; 
       cin>>n ; 
   if(n&1){
    cout<<1<<endl;
   }
   else {
    int i = 1 ; 
    int cnt = 0 ; 
    while(n%i == 0 ){
        cnt++;
        i++;
    }
    cout<<cnt<<endl;
   }
    }
return 0 ;

}



