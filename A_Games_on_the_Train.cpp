#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define fast ios::sync_with_stdio(false); cin.tie(NULL);

int main() {
    fast;
    int t ; 
    cin>>t; 
    while(t--){
        ll n ; 
        cin>>n;
        vector<ll> v(n);
        for(auto &x : v)cin>>x;
        sort(v.begin(),v.end());
        cout<<v[n-1]-v[0]+1<<endl;


    }

    return 0;
}