#include<bits/stdc++.h>
using namespace std ;

int main(){
int t ; 
cin>>t;
while(t--){
    int n , k ; 
    cin>>n>>k ; 
    vector<int> v(n*k);
    for(int i= 0 ;i<n*k; i++){
        cin>>v[i];
    }
    int f=(n/2);
long long sum = 0 ;
    for(int  i = (n*k)-f-1,j=0 ;j<k && i>=0;j++,i=i-f-1){
        sum+=(long long)v[i];
    }
   cout<<sum<<endl;
}
    return 0;
}