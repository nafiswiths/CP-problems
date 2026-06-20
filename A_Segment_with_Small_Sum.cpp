#include <bits/stdc++.h>
using namespace std;
#define ll long long
int main() {
   long long n,x  ; 
   cin>>n>>x;
   vector<long long> v(n+1);
    for(int i =1 ; i<= n ; i++) cin>>v[i];
    map<ll,ll>fq;
    ll i = 1 , j =1;
    ll ans = 0; 
    ll sum=0;
    while(j<=n){
        sum+=v[j];
        while(sum > x && i<=j){
           sum-=v[i];
         i++;
        }
       
          ans=max(ans,j-i+1);
          j++;
    }

    cout<<ans<<endl;
  
}