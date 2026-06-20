#include<bits/stdc++.h>
using namespace std ; 
int main(){
int t ; 
cin>>t ; 
while(t--){
int legs ;
cin>>legs ;
int l [2]={4,2};
int count = 0 ;
for(int i = 0 ; i < 2 ; i++){
count = count + legs/l[i];
legs = legs%l[i];
if(legs == 0){
    break;
}



}

cout<<count<<endl;




}
 return 0 ; 
}