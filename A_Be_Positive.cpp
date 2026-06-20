#include<bits/stdc++.h>
using namespace std ;

int main(){
int t ; 
cin>>t;
while(t--){
    int n ;
    cin>>n ; 
    int cnt = 0,cnto=0 ;
    vector<int> v(n) ;
    for (int i = 0 ;i< n ; i++){
        cin>>v[i];
        if(v[i]==0){
            cnt++;
        }else if( v[i]==-1){
            cnto++;
        }
   }

   
 if(cnto %2 ==0 ){
   cout<<cnt<<endl;
 }
 else{cout<<cnt+2<<endl;

 }

   



}
    return 0;
}