#include<bits/stdc++.h>
using namespace std ;


int main (){
    int t ; 
    cin>> t  ; 
    while(t--){
       int n ; 
       cin>>n ; 
   string k ; 
   cin>> k ;
   int ans =1 ,m=1 ; 


       for(int  i = 1 ; i< n ; i++){
        if(k[i] !=k[i-1]) ans = 1 ; 
        else ans++;
        m=max(ans,m);

       }
      cout<<m+1<<endl;
     
    }
return 0 ;

}



