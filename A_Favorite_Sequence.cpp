#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define ull unsigned long long
#define ld long double

#define pb push_back
#define ff first
#define ss second
#define all(x) (x).begin(), (x).end()
#define rall(x) (x).rbegin(), (x).rend()
#define sz(x) (int)(x).size()

#define yes cout << "YES\n"
#define no cout << "NO\n"
#define print(x) cout << x << "\n"
#define print2(x,y) cout << x << " " << y << "\n"

#define vll vector<ll>
#define vi vector<int>

#define fastio() ios::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL)

const ll INF = 1e18;
const int MOD = 1e9+7;
const int N = 2e5 + 5;

void solve(){
  ll n ; 
  cin>>n;
  vll v(n);
  for(auto &x:v) cin>>x;
  int i = 0 ;
  if(n%2 == 0){
    ll k = n/2;
 while(k--){
  cout<<v[i]<<" "<<v[n-1-i]<<" ";
  i++;
 }
}
else{
  int i=0;
     ll p = n/2;
 while(p--){
  cout<<v[i]<<" "<<v[n-1-i]<<" ";
  i++;
 }
 cout<<v[(n/2)];
}
}

int main(){
    fastio();

    int t = 1;
    cin >> t;
    while(t--){
        solve();
        cout<<endl;
    }

    return 0;
}