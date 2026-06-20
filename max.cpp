#include <bits/stdc++.h>
#include <string>
using namespace std;

int main() {
    
    int n;
    
    cin>>n ;
   
    int ans= 0 ;
    if(n%2 == 0 ){
        cout<<"NO"<<endl;
        return 0 ;
    } 
    else{
    for(int i =3 ; i<=sqrt(n);i=i+2){
if(n%i==0){
    cout<<"NO"<<endl;
    return 0 ;
}

    }
    }
    cout<<"YES"<<endl;
    
    return 0;
}
