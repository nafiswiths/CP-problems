#include<bits/stdc++.h>
using namespace std ;


int main (){
    int t ; 
    cin>> t  ; 
    while(t--){
int n ;
cin>>n ;
vector <int> v(n);
int ans ;
for (int i =0 ; i< n ; i++){
    cin>>v[i];
}
if(n>v[n-1]){
    ans = -1 ;

}
else{
ans = 0 ; 

for(int i = n-1 ; i >= 0 ;i--){
   int l;
   l = v[i-1 ]/(2*v[i]);
   ans+=ceil(l);
}
    
cout<<ans<<endl;}
    }
return 0 ;

}



