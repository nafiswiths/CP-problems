
#include<bits/stdc++.h>
#include<vector>
using namespace std;

int main(){
int n ;
cin>>n ;
int sum = 0;
int last ;

//cout<<s;
for(int i =10 ; n>0;){
last=n%i;;
sum=sum+last ;

n=n/10;
    
}
cout<<sum<<endl;

return (0);
}