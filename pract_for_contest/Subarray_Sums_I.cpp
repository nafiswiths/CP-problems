#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define fast ios::sync_with_stdio(false); cin.tie(NULL);

int main() {
    fast;

    ll n ,x;
    cin>>n>>x;
    vector<ll> v(n+1);
    for(int i =1 ; i<=n;i++){
        cin>>v[i];
    }
    vector<ll> p(n+1,0);
    for(int i= 1 ; i <= n ; i++){
        p[i]=p[i-1]+v[i];
    }
    map <ll,ll> mp;
    ll ans= 0 ; 
    mp[0]=1;
    for(int i = 1 ; i<=n ; i++){
        if(mp[p[i]-x]>0){
            ans+=mp[p[i]-x];
        }
        mp[p[i]]++;
    }

    cout<<ans<<endl;

    return 0;
}