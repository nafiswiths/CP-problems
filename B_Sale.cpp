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
    int m, n ; 
    cin>>n>>m;
    vector<int> v(n);
     int ans=  0;
     int cnt= 0 ;
    for(int i  = 0 ; i< n ; i++){
        cin>>v[i];
        if(v[i]<0){
    cnt++;}

    }
   sort(v.begin(),v.end());
   
   if(cnt==0){
    cout<<0<<endl;
    return ;
}

   
  else{ int i = 0 ;
   while(m>0 && i<n){
    if(v[i]<0){
    ans+=abs(v[i]);
    }else{
        break;
    }
    m--;
    i++;
   }
   cout<<ans<<endl;

}    
}

    // for(int i = 0 ; i< n ; i++ ){
    //     if(v[i]>=cnt){
    //         ans++;
    //     }
    //     else{
    //         int j = i ;
    //         while(v[j+1]==v[i]){
    //             i++;
    //         }
    //     }
    //     cnt++;
    // }
    // cout<<ans<<endl;


int main(){
    fastio();

    // int t = 1;
    // cin >> t;
    // while(t--){
        solve();
    // }

    return 0;
}