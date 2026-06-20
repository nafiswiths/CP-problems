#include<bits/stdc++.h>
#include<vector>
using namespace std;
int main(){
int  t ;
cin>>t;
while (t--){
int a , b ;
cin >> a >> b ;
if(a-b == 1){
    cout<<1<<endl;
    return 0 ;
}
int count= 0;
vector<int> v,V;
for(int i = a ;i<b;i++){
    v.push_back(i);
}
V.push_back(a);
for(int i = a ;i<b;i++){
    if(i+1>i &&((i+1-i)<(i+2-(i+1)))){
        count++;
    }
    cout<<count<<endl;
}
}
    return 0 ;
}