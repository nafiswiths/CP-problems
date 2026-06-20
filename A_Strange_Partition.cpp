#include<bits/stdc++.h>
using namespace std ;

int main(){
int t ; 
cin>>t;
while(t--){
    long long  n , k ; 
    cin>>n>>k ; 
    vector<int> v(n);
    long long ma = 0 ;
    long long sum = 0 ;
    for(int i= 0 ;i<n; i++){
        cin>>v[i];
        ma += (v[i] + k - 1) / k;
        sum+=v[i];
    }
   
   cout<<(sum+k-1)/k<<" "<<ma<<endl;
}
    return 0;
}