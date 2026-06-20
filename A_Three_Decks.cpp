#include<bits/stdc++.h>
using namespace std ;


int main (){
    int t ; 
    cin>> t  ; 
    while(t--){
        int a , b , c ; 
        cin>>a>>b>>c;
        float x,y;
     ;
        x=(c-(2*a)+b)/3;
        y=(a-b+x);

        if((a+x)==(b+y) && (a+x)==(c-x-y) && y>=0){
            cout<<"YES"<<endl;
        }
        else{
            cout<<"NO"<<endl;
        }

    }
return 0 ;

}



