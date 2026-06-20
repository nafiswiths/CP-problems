#include<bits/stdc++.h>
using namespace std ; 
int  main(){
int t ; 
cin>>t ; 
while(t--){
int num ;
cin>>num ; 
int sum1 = 0 , sum2=0;
for(int  i =0 ; i < 3 ; ++i){
int k = num%10;
sum1=sum1+k;
num=num/10;

}
for(int  i =0 ; i < 3 ; ++i){
int k1 = num%10;
sum2=sum2+k1;
num=num/10;

}

if(sum1 == sum2 ){
cout<<"YES"<<endl;
}
else {
cout<<"NO"<<endl;
}}
    return 0 ;

}