#include <bits/stdc++.h>
using namespace std;
bool chck(vector<long long>&v ,long long  k  , double l){
    double ans=0;
    for(int i = 0 ; i< v.size() ;i++){
        ans+= (long long)(v[i]/l);
    }   
    return ans>= k ;
}

int main() {
   long long n,k  ; 
   cin>>n>>k;
   vector<long long> v(n);

   long long mx=INT_MIN;
   for(auto &x : v){cin>>x;
    if(x>mx){
        mx=x;
    }}
    double l = 0 , r = mx;
  
   for(int i =0 ; i<100 ; i++){
      double mid=(l+r)/2;
      
      if( chck(v,k,mid)){
        l=mid;
         

      }else{
         r=mid;
      }
   }
   cout<<fixed<<setprecision(6)<<l<<endl;


    
}