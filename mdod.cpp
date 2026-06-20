#include<bits/stdc++.h>
using namespace std ;
int main(){

    
    int n,q ; 
    cin>>n >>q; 
    int ans=0,x ;
    for(int i = 1; i< q ; i++){
        if((n*i)%q == 1 ){
            ans =1 ; 
            x= i ;
            break ;
        }
    }
    if(ans){
        cout<<x<<endl;
    }
    else{
        cout<<"No such integer exists."<<endl;
    }
  
    


    

}






