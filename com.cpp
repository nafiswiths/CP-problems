#include<bits/stdc++.h>
using namespace std ;
int main(){
int n ;
cin>>n;
vector<int> ara(n);

set<int> s1 ;
for(int i = 0 ; i< n ; i++){
    cin>>ara[i];
    s1.insert(ara[i]);


}   

cout<<s1.size()<<endl;
for(auto x : s1){
    cout<<x<<" ";

}

    return 0;
}