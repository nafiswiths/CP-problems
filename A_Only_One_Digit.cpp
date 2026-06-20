#include<bits/stdc++.h>
using namespace std ;
int main(){
    int t ;
    cin>>t;
    while(t--){
        int x ; 
        cin>>x ; int ans =9 ;
        string s =to_string(x);
        for(int i = 0 ; i< s.size() ; i++){
            if(s[i]-'0'< ans){
                ans = s[i]-'0';
            }
        }
        
        
        cout<<ans <<endl;
    }
}