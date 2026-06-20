#include<bits/stdc++.h>
using namespace std ;


int main (){
   int n ;
   int s ; 

   cin>>n>>s ; 

   int ara[n];
   for(int i = 0 ; i< n ; i++){
    cin>>ara[i];
    
   }
   int ans = 1 ;

   for(int i = 0 ; i< n-1 ; i++){
    if(abs(ara[i]-ara[i+1]) >= ((float)s+.5)){
        ans = 0  ; 
        break; 
    }

    
   }
   if(ans ){
    cout<<"Yes"<<endl;
   }
   else{
    cout<<"No"<<endl;
   }

return 0 ;

}



