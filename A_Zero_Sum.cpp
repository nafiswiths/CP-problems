#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define fast ios::sync_with_stdio(false); cin.tie(NULL);

int main() {
    fast;

    int s;
    cin >> s;
    while(s--) {
    ll n ; 
    cin>> n ; 
    vector<ll> v(n+1);
    for(int i=1;i<=n;i++) cin>>v[i];
    ll sum = 0 ;
    for(int i=1;i<=n;i++) sum+=v[i];
        if(sum==0) cout<<"YES"<<endl;
        else{
            ll cnt = 0;
            for(int i=1;i<n;i++){
                if(v[i]== v[i+1]) cnt++;
            }
            if(abs(sum)%4==0) cout<<"yes"<<endl;
            else cout<<"no"<<endl;
        }
    }
       }

    

