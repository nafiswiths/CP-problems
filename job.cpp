#include<bits/stdc++.h>
using namespace std ;
using ll = long long ; 
int main(){

    
    long long  m ; 
    cin>>m;
    ll a=0 ,b=0;
    pair<ll,ll> p [m];
    for(int i = 0 ; i < m ; i++){
        cin>>p[i].first>>p[i].second;
        if(p[i].first> a){
            a= p[i].first;
        }
        if(p[i].second> b){
            b= p[i].second;
        }
    }
    int cnt = 0 ; 
    
   
     for(int i = 0 ; i < m ; i++){

        cin>>p[i].first>>p[i].second;
        if(p[i].first>= a || p[i].second <= b){ cnt++ ;
           
        }
        if(p[i].second> b){
            b= p[i].second;
        }
    }
    
    
   
        
    }


    







