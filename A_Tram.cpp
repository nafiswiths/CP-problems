#include<bits/stdc++.h>
using namespace std;
int main(){
    int n ; 
    cin>>n;
    pair<int,int> p[n];
    for(int i = 0 ; i < n ; i++){
        cin>>p[i].first>>p[i].second;
    }
    int ans = 0 ,res=0;
    for(int i = 0 ; i<n ;i++){
        ans=ans+(-p[i].first+p[i].second);
     
        if(ans>res){
            res=ans;
        }

    }
    cout<<res<<endl;
}