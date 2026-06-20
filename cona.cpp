
#include<bits/stdc++.h>
#include<vector>
using namespace std;

int main(){
int n ;
cin>>n ;
int ara[n];
for(int i = 0 ; i <n ; i++){

    cin>>ara[i];
}

int index1,index2,value;
for(int i = 0 ; i<n ;i++){

int k = count(ara, ara + n ,ara[i]);
cout<<k;
if(k==2){
    value= ara[i];
    index1=i;
    } 
}

for(int j = n-1 ; j >=0 ; --j ){
if(value == ara[j]){
    index2= j ;
}

}

cout<<index2<<endl;
return (0);
}