
#include<bits/stdc++.h>
#include<vector>
using namespace std;
int ocur(int ara[],int size){
    int count=0 ;
    for(int i = 0 ; i < size ;i++){
        for(int j =i+1 ;j<size ; j++){
if(ara[i]==ara[j]){
    count++;
}
        }
    }
    return count ;
}
int main(){
int n ; 
cin>>n;
int ara [n];
for(int i = 0 ; i<n ; i++){
cin>>ara[i];
}
sort(ara,ara+n);
cout<<ocur(ara,n)<<endl;
    return 0 ;
}