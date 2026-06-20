#include<bits/stdc++.h>
using namespace std;
#define ll long long 

int main(){
    int t ;
    cin>>t;
    while(t--){
       int n ;
       cin>>n;
       string s ;
       cin>>s;
        vector<int> v1;
    int cnt1 = count(s.begin(),s.end(),'1');
    if(cnt1==0){
        cout<<0<<endl;
        continue;
    }
    if(cnt1%2==1 && n%2==1 ){
        cout<<-1<<endl;
        continue;
    }
    else if(cnt1%2==0){
        for(int i = 0;i<n;i++){
            if(s[i]=='1'){
                v1.push_back(i+1);
            }
        }
    }
    else{
            for(int i = 0;i<n;i++){
            if(s[i]=='0'){
                v1.push_back(i+1);
            }
        }
    }
    cout<<v1.size()<<endl;
    for(auto x : v1){
        cout<<x<<" ";
    }
    cout<<endl;
    }
}