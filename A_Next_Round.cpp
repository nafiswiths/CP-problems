#include <iostream>

using namespace std ;
int main (){
int n , k ;
cin >> n >> k;

int total[n];
for(int i = 0 ; i<n;i++){
    cin>>total[i];
}
int num=0,s=total[k-1],sum = 0 ;
for(int i = 0 ; i<n ;i++){
    if(total[i]>= s){
        num++;
    }
    sum += total[i];
}
if(sum == 0)cout<<"0"<<endl;
else
cout<<num<<endl;
 return 0;
}