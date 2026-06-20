#include<bits/stdc++.h>
using namespace std ;


int main (){
    int t ; 
    cin>> t  ; 
    while(t--){
int l, r ; 
cin>>l>>r;
if(1<l &&r>1){
    cout<<"NO"<<endl;
}
else if (l==1 && r==2){
    cout<<"YES"<<endl;

}
else if(r==1){
    int ans = 1 ;
    for(int i = 1 ; i*i<=l ; i++){
        if(l%i==1){
            ans = 0 ;
            break ; 
        }


    }
    if(ans){
        cout<<"YES"<<endl;
    }
    else{
        cout<<"NO"<<endl;
    }
}

    
    }

return 0 ;

}



