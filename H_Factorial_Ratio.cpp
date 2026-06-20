#include<bits/stdc++.h>
using namespace std ;
int main (){
   int a , b ;
   cin>>a>>b;
   long long ans = 1 ;
   for(int i = a ; i > b ;i--){
    ans*=i;
    
   }
   
   cout<<ans;
return 0 ;

}





