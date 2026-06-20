#include <bits/stdc++.h>
using namespace std;
int main(){
    int t ; 
    cin>>t ; 
    while(t--){
        int n,cnt = 0  ; 
        cin >> n ; 
        if(n<10 ){
            cout<<n<<endl;
            
        }
     else if(n<100){
        cout<<(n/10)+9<<endl;
     }
     else if(n<1000){
        cout<<(n/100)+18<<endl;
     }
     else if(n<10000){
        cout<<(n/1000)+27<<endl;
     }
     else if(n<100000){
        cout<<(n/10000)+36<<endl;
     }
     else{
        cout<<(n/100000)+45<<endl;
     }
       
    }
}