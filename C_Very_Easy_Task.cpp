#include <bits/stdc++.h>
using namespace std;
bool chck(long long x , long long y,long long n , long long t ){
    long long  p = t/x +t/y;
 
    return p>=n-1;
}
int main() {
   long long n,x,y ; 
   cin>>n>>x>>y;
   long long l = 0 ,r=1e18;
   long long ans=r;
   long long fir=min(x,y);
   
   while(l<=r){
      long long mid=(l+r)/2;
      
      if(chck(x,y,n,mid)){
         ans = mid ;
         r=mid-1;

      }else{
         l=mid+1;
      }
   }
   cout<<ans+fir<<endl;


    
}