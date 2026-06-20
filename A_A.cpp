#include<bits/stdc++.h>
using namespace std ;
int main(){
int n ;
cin>>n;
vector<int> ara(n);
int  sum=0,cnt=0;
for(int i = 0 ; i< n ; i++){
    cin>>ara[i];
    sum+=ara[i];
}   
int t ; 
cin>>t;
while(t--){
    int b,c ;
    cin>>b>>c;
 int j = count(ara.begin(),ara.end(),b);
   
    cout<<sum-(j*b)+(j*c)<<endl;
}
    return 0;
}