#include<bits/stdc++.h>
using namespace std ;
#define endl "\n";
int main(){ios_base::sync_with_stdio(0);
cin.tie(0);
    int  t ;
    cin>>t; 
    while(t--){
int num ;
cin>>num;
int sum = 0 ; 
for (int i = 1 ; i<= num/2;i++){
    if(num%i==0){
sum = sum + i ;
    }
}
if(sum>num){
    cout<<"abundant"<<endl;
}
else if(sum<num){
cout<<"deficient"<<endl;
}
else{
cout<<"perfect"<<endl;
}


    }
    return 0;
}