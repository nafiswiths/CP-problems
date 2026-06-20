#include <bits/stdc++.h>
using namespace std;

int main() {
   long long n; 
   cin>>n;
  vector <long long> p(n);
  for(auto &x : p) cin>>x;
  sort(p.begin(),p.end());
  long long q ; 
  cin>>q;
  while(q--){
    long long x; 
    cin>>x ;
    long long ans = upper_bound(p.begin(),p.end(),x)-p.begin();
    cout<<ans<<endl;
  }
    
   
  


    
}