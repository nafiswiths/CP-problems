#include<bits/stdc++.h>
using namespace std ;

int main(){
int t ; 
cin>>t;
while(t--){
    int n  ;
    cin>>n ; 
    vector<int> v(n) ;
    for (int i = 0 ;i< n ; i++){
        cin>>v[i];
   }
   int r = INT_MIN;
   for(int i = 0  ; i< n-1 ; i++){
    r=max(r,v[i+1]-v[i]);
   }
   int x =v[0],y=v[n-1];
   sort(v.begin(),v.end());

    cout<<max(max(y-v[0],v[n-1]-x),r)<<endl;
   
   



}
    return 0;
}