#include <bits/stdc++.h>
using namespace std;
int main(){
     int  t ; 
     cin>> t ;
     while(t--){
    int n , m=0 ;
    cin>>n;
    int ara[n];
    
   for(int i = 0  ; i< n ; i++){
    cin>>ara[i];
    m=max(m,ara[i]);

   }
   for(int i = 0 ; i< n ; i++){
    cout<<m-ara[i]+1<<" ";
   }
   cout<<endl;
   }
    
    return 0 ;
}
  
