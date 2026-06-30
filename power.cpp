#include <bits/stdc++.h>
using namespace std;

#define ll long long

int  power(int x , int n ){
    if(n==0){
        return 1 ;
    
   }
   else if(n%2==0){
    return power(x,n/2)*power(x,n/2) ;
   }
   else{
    return x*power(x,n-1) ;
   }
}
int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
 ll  n , x ;
 cin >> x>> n ;
 cout << power(x,n) << endl;
}