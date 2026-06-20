#include<bits/stdc++.h>
using namespace std;
int main(){
   
    int n ;
    cin>>n;
    map<string,int> m;
    while(n--){
        string s ; 
        cin>>s;
        m[s]++;
    }
    int ans = -1 ;
    for(auto x: m){
        ans=max(x.second,ans);
    }
    for(auto x: m){
        if(x.second==ans){
            cout<<x.first<<endl;
        }
    }
    
}