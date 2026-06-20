#include<bits/stdc++.h>
using namespace std ;

int main(){
int t ; 
cin>>t;
while(t--){
    int n ,j,k ;
    cin>>n>>j>>k ; 
    vector<int> v(n) ;
    int key ; 
    for (int i = 0 ;i< n ; i++){
        cin>>v[i];
        if(i+1 == j ){
            key=v[i];
        }
   }
if(k> 1 ){
    cout<<"YES"<<endl;
    continue;
}
   sort(v.begin(),v.end());
   if(v[n-1]== key ){
    cout<<"YES"<<endl;
   }
   else{
    cout<<"NO"<<endl;
   }
   



}
    return 0;
}