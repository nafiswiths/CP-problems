

#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define fast ios::sync_with_stdio(false); cin.tie(NULL);

int main() {
    fast;
    ll t ;
    cin>>t;
    while(t--) {

    ll n ; 
    cin>>n;

    vector<ll> v(n);
    for(ll i=0;i<n;i++) {
        cin>>v[i];
       }
       sort(v.begin(),v.end());
       int ans = 1;
       for(int i=0;i<n-1;i++) {
           if(v[i+1] - v[i] > 1) {
               ans=0;
               break;
           }
       }
       if(ans == 0) {
           cout<<"NO"<<endl;
       } else {
           cout<<"YES"<<endl;
       }
    }
}
