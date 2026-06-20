#include <iostream>
#include <string>
using namespace std ;
int main (){
int t;
cin>>t;
while(t--){
    string pass;
    cin>>pass;
    for(int i = 0 ; i < t ; i++){
        if(pass[i+1] == '\0'){
            break;
        }
        else if(pass[i] != pass[i+1]){
            pass[i]=pass[i+1];
pass [ i]='x';
        }
    }
    cout<<pass<<endl;
}
 return 0;
}