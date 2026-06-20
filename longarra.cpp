#include<bits/stdc++.h>
using namespace std ;
using ll = long long;

int main(){

    
    int n;
    cin>>n ; 
    vector <ll > v(n);
   map<ll,ll> m;
    for(int i = 0; i<n ; i++)cin>>v[i];
    
    ll l =0 , r = 0,mm= 0 ; 
    
    while(r<n){

        if(m.count(v[r])  && m[v[r]] >= l){
            l=m[v[r]]+1;
           

        }else{
          
            ll len = r-l+1 ;
            if(len> mm){
            mm=len; }
             m[v[r]]=r;
            r++;
        }
    }
    cout<<mm<<endl;
    
  
    


    

}






