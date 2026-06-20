#include<bits/stdc++.h>
using namespace std ;


int main (){
    int t ; 
    cin>> t  ; 
    while(t--){
int n ,k;
cin>>n>>k ;
vector <int> v(n);
for (int i =0 ; i< n ; i++){
    cin>>v[i];
}
sort(v.begin(),v.end());
int ans = INT_MIN;
int cnt = 0 ; 
for (int i = 0 ; i< n-1 ; i++){
    if((v[i+1]-v[i] )> k ){
        cnt++;
      
    }else{
        cnt=0;
    } ans=max(ans,cnt);
}
cout<<ans+1<<endl;
    }
return 0 ;

}



