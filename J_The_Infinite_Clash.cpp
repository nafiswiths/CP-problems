#include<bits/stdc++.h>
using namespace std ;


int main (){
    int t ; 
    cin>>t ;
    while(t--){
        int k , h ;
        cin>>k>>h;
        int ataK= k;
        for(int i = 0 ;; i++){
            

            h=h-ataK;
            k=k-h;
            ataK= k;
            if(k<=0){
                cout<<"Humans"<<endl;
                break;
            }
            else if( h <= 0){
                cout<<"Kryptx"<<endl;
                break;

            }

        }
    }
    

    
return 0 ;

}





