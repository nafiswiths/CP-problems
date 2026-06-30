
// Description: Given an array of integers, 
// find maximum sum subarray among all subarrays possible.
// Sample Input: 7 2, -4, 1, 9, -6, 7, 3 Sample Output: 14 
#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define fast ios::sync_with_stdio(false); cin.tie(NULL);
int maxcross(vector<ll> &v, ll l , ll m , ll h){
ll lsum = 0 , rsum = 0 ;
ll sum = 0 ;
 for(int i =m ; i>=l ; i--){
    sum+=v[i] ;
    lsum = max(lsum,sum) ;

 }
 sum = 0 ;
 for(int i = m+1 ; i<=h ; i++){
    sum+=v[i] ;
    rsum = max(rsum,sum) ;
 }
 return lsum+rsum ;
}

int maxsum(vector<ll> &v, ll n, ll l ,ll h) {
 if(l==h){
    return v[l] ;
 }
 ll  m = (l+h)/2 ;
 ll leftsum=maxsum(v,n,l,m) ;
 ll rightsum=maxsum(v,n,m+1,h) ;
 ll crosssum=maxcross(v,l,m,h) ;
 return max({leftsum,rightsum,crosssum}) ;
}

int main() {
    fast;
    vector<ll> v={2, -4, 1, 9, -6, 7, 3};
    ll n = v.size();
    cout << maxsum(v, n, 0, n - 1) << endl;
    return 0;
}
