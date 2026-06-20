#include <bits/stdc++.h>
using namespace std;
int main(){
    long long t ; 
    cin>>t ; 
    while(t--){
        long long n,cnt =1;
        cin>>n;
   
    if(n<=3){
        cout<<1<<endl;
    }
    else{
  
    while(n>3){
        cnt*=2;
        n=n/4;

    }
    
    cout<<cnt<<endl;
    }}
    return 0 ;
}