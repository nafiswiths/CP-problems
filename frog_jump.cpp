
#include <bits/stdc++.h>
using namespace std;
#define ll long long
int d[1000000];
int func(int n , vector<int> &v){
   if(n==0 ){
    return 0 ;
   }
   else if(n==1){
    return abs(v[1]-v[0]);
   }
   if(d[n]!=-1){
    return d[n] ;
   }
   
  
    int cost ; 
    cost= func(n-1,v)+ abs(v[n-1]-v[n]);
    cost= min(cost,func(n-2,v)+ abs(v[n-2]-v[n]));
    d[n] = cost ;
    return cost ;
   
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    memset(d, -1, sizeof(d));
 int n  ;
cin >> n ;

vector<int> v(n) ;
for(int i = 0 ; i < n ; i++){
    cin >> v[i];
}
int ans = func(n-1,v);
cout<<ans<<endl ;


}