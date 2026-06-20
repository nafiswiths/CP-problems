#include <bits/stdc++.h>
using namespace std;

int main() {
   long long a, b, n  ; 
   cin>>a>>b>>n;
   long long l = 0 ,r=max(a,b)*n;
   long long ans=r;
   
   while(l<=r){
      long long mid=(l+r)/2;
      // long long k=floor((mid/a)*(mid/b));
      long long x=mid/a ,y=mid/b;
      if(y!=0 && (x>= (n+y-1)/y)){
         ans = mid ;
         r=mid-1;

      }else{
         l=mid+1;
      }
   }
   cout<<ans<<endl;


    
}