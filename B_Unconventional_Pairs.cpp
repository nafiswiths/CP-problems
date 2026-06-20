#include<bits/stdc++.h>
using namespace std ;

int main(){
int t ; 
cin>>t;
while(t--){
    int n ;
    cin>>n ; 
    int cnt = INT16_MIN ;
    vector<int> v(n) ;
    for (int i = 0 ;i< n ; i++){
        cin>>v[i];
      
   }
   sort(v.begin(),v.end());
   for(int i = 0,j=1 ; i<n-1,j<n; i+=2 ,j+=2){
    int k = v[j]-v[i];
    cnt = max(k,cnt);
   }

   
 
   cout<<cnt<<endl;
 


   



}
    return 0;
}