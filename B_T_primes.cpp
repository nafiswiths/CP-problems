#include<bits/stdc++.h>
using namespace std;
#define ll long long



// vector<ll>  divcnt(ll  n ){
// vector<ll> v(n+1,0);
// for(ll i = 1 ; i<=n ;i++){
  
//         for(ll j =i;j<=n;j=j+i){
//             v[j]++;
//         }
    
// }
// return v;
// }


int main(){
    int n;
    cin >> n;
    vector<long long > vv(n);
    int cnt = 0;
    ll mx = INT_MIN;
   for(long long i = 0 ; i<n ;i++){
    cin>>vv[i];
    if(vv[i]>mx){
        mx=vv[i];
    }
   }

   ll l = sqrt(mx)+1;
   vector<ll> isp(l+1,1);
   isp[0]=isp[1]=0;
   for(ll i = 2 ; i<=l ;i++){
    if(isp[i]==1){
        for(ll j = i*i ;j<=l;j=j+i){
            isp[j]=0;
        }
    }
   }
   


   for(long long i = 0 ; i<n ;i++){
    ll z=sqrt(vv[i]);

   if(isp[z] && (z*z==vv[i])){
    cout<<"YES"<<endl;
   }
   else{
    cout<<"NO"<<endl;
   }
   }

    
}
