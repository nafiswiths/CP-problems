#include<bits/stdc++.h>
using namespace std;
#define ll long long 
ll big(ll x,ll n){
    ll m = 1000000007;
    ll res;
    if(n==0){
        res = 1 ;

    }
    else if(n%2){
        res = (2%m *big(2,n-1)%m)%m;
    }else{
        res=(big(2,n/2)%m * big(2,n/2)%m)%m;
    }
    return res;

}
int main(){
    
int n ; 
cin>>n ;
 
 cout<<big(2,n)<<endl;
}