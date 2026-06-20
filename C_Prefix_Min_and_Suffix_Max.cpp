#include<bits/stdc++.h>
using namespace std ;

int main(){
int t ; 
cin>>t;
while(t--){
    int n,f,s;
    cin>>n ; 
    string ans(n,'0');
    vector<int> v(n) ;
    ans[0]='1';
    ans[n-1]='1';
    int low=INT_MAX ,high = INT_MIN; 
    for (int i = 0 ;i< n ; i++){
        cin>>v[i];
        if(i==0)
        {
             low=v[i];
             continue;
        }
        if(v[i]<low)
        {
            low=v[i];
            ans[i]='1';
        }
   }
   for (int i = n-1 ;i>=0 ; i--){
        if(i==n-1)
        {
             high=v[i];
             continue;
        }
        if(v[i]>high)
        {
            high=v[i];
            ans[i]='1';
        }
   }
//  int f = find(v.begin(), v.end(), low)-v.begin();
//      int s = find(v.begin(),v.end(),high)-v.begin();
  

//    v.erase(v.begin()+1,v.begin());
//    v.erase(v.end()-1,v.end());

// if(count(v.begin(),v.end(),low)>0){
// ans[f]='1';
// }
// if(count(v.begin(),v.end(),low)>0){
//     ans[s]='1';

cout<<ans<<endl;

   
   
   



}
    return 0;
}