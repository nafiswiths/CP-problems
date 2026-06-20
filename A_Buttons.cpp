#include<bits/stdc++.h>
using namespace std ;
int main(){

int t;
    cin>>t;
    while(t--){
    int n, x,k;
    cin>>n>>x>>k;
    if(n==x){
        if(k%2 != 0){
            cout<<"First"<<endl;
        }
        else{
            cout<<"Second"<<endl;
        }
    
    }
    else{
        if(n>x){
            cout<<"First"<<endl;
        }
        else{
            cout<<"Second"<<endl;
        }
    
    }
    }
   return 0 ;
    }