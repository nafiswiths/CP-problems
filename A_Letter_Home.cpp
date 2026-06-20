#include<bits/stdc++.h>
using namespace std ;

int main(){
int t ; 
cin>>t;
while(t--){
    int n ,s ;
    cin>>n>>s ; 
    vector<int> v(n) ;
    for (int i = 0 ;i< n ; i++){
        cin>>v[i];
   }
   if(n == 1){
    cout<<abs(v[0]-s)<<endl;
    continue;
   }
   int mi = min(abs(s-v[0]),abs(s-v[n-1]));
   int ma = max(abs(s-v[0]),abs(s-v[n-1]));
 
   cout<<2*mi+ma<<endl;


   



}
    return 0;
}