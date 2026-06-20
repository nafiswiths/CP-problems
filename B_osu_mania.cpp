#include<bits/stdc++.h>
using namespace std;
int main(){
int t ; 
cin >> t ;
while(t--){
int  n ; 
cin>> n ; 
vector<int > ans(n) ; 
for(int i = 0 ; i < n ; i++){
string ara;
cin>>ara;

for(int j = 0; j<4 ;++j){

if(ara[j]=='#'){
    ans[i]=j+1;
    break;
}

}


}
 for(int i = n-1 ; i >=0  ; --i){
    cout<<ans[i]<<" ";
 } 

cout<<"\n";
}
return 0 ; 

}