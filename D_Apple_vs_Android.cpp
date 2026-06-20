#include<bits/stdc++.h>
using namespace std ;


int main (){
    int t ; 
    cin>>t ;
    int count = 0 ,tru=0;
    for(int i = 0 ; ; i++ ){
        int a ;
        cin>>a ;
        count++;
        if(a==1){
            tru++;

        }
        if(tru == t){
            break ;
        }
    }
    cout<<count<<endl;

    
return 0 ;

}






