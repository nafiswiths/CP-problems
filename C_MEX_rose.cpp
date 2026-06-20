#include<bits/stdc++.h>
#include<vector>
using namespace std;
// int mex(vector<int>& v ){
//     unordered_set<int> s (v.begin(),v.end());
//     int x = 0  ;  
//     while(s.count(x)){
//         x++;

//     }
//     return x; 
// }
int main(){
int  t ;
cin>>t;
while (t--){
int n,k ;
cin >> n >> k ;
int cnt = 0 ; 
vector<int> v(n),v2(k,0);
for(int i = 0 ;i<n;i++){
  cin>>v[i];
  if(v[i]==k){
    cnt++;
  }
  if(v[i]<k){
    v2[v[i]]++;
  }
}
int pp =  0 ; 
for(int i = 0 ; i < k ; i++){
    if(!v2[i]){
        pp++;
    }
}




    cout<<max(pp,cnt)<<endl;
}
    return 0 ;
}