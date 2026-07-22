#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define fast ios::sync_with_stdio(false); cin.tie(NULL);

int main() {
    fast;

    int s;
    cin >> s;
    while(s--) {
      ll a,b,k;
        cin>>a>>b>>k;
        ll g=__gcd(a,b);
        ll max_val = max(a/g,b/g);
        if(max_val > k ){
            cout<<2<<endl;
        }
        else{
            cout<<1<<endl;
        }

    }
       }

    

