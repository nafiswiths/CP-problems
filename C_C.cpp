#include<bits/stdc++.h>
using namespace std ;
int main(){
    int t ;
    cin>>t ;
    while(t--){
int n ;
string nm ;

cin>>n;
cin>>nm;
vector<int> ara(n);
for(int i = 0 ; i< n ; i++){
    cin>>ara[i];
}
if(nm == "Alice"){
    cout<<"Alice"<<endl;
}
else{
    if(ara[0]==1){
        cout<<"Bob"<<endl;
    }
    else{
        cout<<"Alice"<<endl;
    }

}}

    return 0;
}