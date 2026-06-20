#include<bits/stdc++.h>
using namespace std;
#define ll long long 


int main(){
    int t ;
    cin>>t;
    while(t--){
       int   n ;
       cin>>n;
      string s ;
      cin>>s;
      if(n%2!=0){
        cout<<"NO"<<endl;
      }
      else{
        stack<char> pp;
        for( auto x : s){
            if(!pp.empty() && pp.top()== x){
                pp.pop();
            }
            else{
                pp.push(x);
            }
        }
        if(pp.empty()){
            cout<<"YES"<<endl;
        }
        else{
            cout<<"NO"<<endl;
        }
      }
    }




}