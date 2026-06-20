#include <bits/stdc++.h>
using namespace std;
#define ll long long
int main() {
   long long n  ; 
   cin>>n;
   vector<long long> v(n+1);
    for(int i =1 ; i<= n ; i++) cin>>v[i];
    map<ll,ll>fq;
    ll i = 1 , j =1;
    ll ans = 1 ; 
    while(j<=n){
        ll l= j-i+1;
        if(fq[v[j]]>=i && fq[v[j]]!=0){
           i=fq[v[j]]+1;
         
        }
        fq[v[j]]=j;

          ans=max(ans,j-i+1);
          j++;
    }

    cout<<ans<<endl;
  
}