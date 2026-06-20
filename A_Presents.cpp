#include<bits/stdc++.h>
using namespace std;
int main(){
    int n ; 
    cin>>n;
    vector<int> v(n+1);
    vector<int> ans(n+1);
    for(int i= 1  ; i <= n ; i++){
        cin>>v[i];
    }

    for(int i= 1   ; i <=n; i++){
        if(i==v[v[i]]){
            
           ans[i]=v[i];
        }else{
            ans[v[i]]=i;
        }}
   for(int i =1 ; i<=n;i++){
    cout<<ans[i]<<" ";
   }
}