#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define fast ios::sync_with_stdio(false); cin.tie(NULL);

int main() {
    fast;

    int s;
    cin >> s;
    while(s--) {
      ll n,x,y;
        cin>>n>>x>>y;
        vector<ll> v(n+1);
        for(int i=1;i<=n;i++) cin>>v[i];
       
        ll k = __gcd(x,y);
        ll ans = 1;
        for(int i=1;i<=n;i++){
           ll dif=abs(v[i]-i);
           if(dif%k!=0){
               ans = 0;
               break;
           }
        }
        if(ans) cout<<"YES"<<endl;
        else cout<<"NO"<<endl;


    }
       }

    

