#include<bits/stdc++.h>
#include<vector>
using namespace std;
int main(){
int  t ;
cin>>t;
for(int i = 0 ; i < t ; i++){
int n ; 
cin >> n ;
int ara[n];
for(int i = 0 ; i < n ; i++){
    cin >> ara[i];
}
int sum1=0,sum2=0;
for (int i = 0 ; i < n ; i=i+2){
    sum1=sum1+ara[i];
}
for(int i = 1 ; i < n ; i=i+2){
    sum2=sum2-ara[i];
}

cout<<sum1+sum2<<endl;


}
    return 0 ;
}