#include<bits/stdc++.h>
using namespace std ;
int main(){

int t;
    cin>>t;
    while(t--){
    int a ,b,x,y;

     cin>>a>>b>>x>>y;
     if(y< b  || (x-a> y-b  )){
        cout<<"-1"<<endl;
        
     }
     else{
        int c = abs(b-y)+abs(abs(b-y)+a-x);
     
         cout<<c<<endl;
      }
     }
    
    return 0 ;
}