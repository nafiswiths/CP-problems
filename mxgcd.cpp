#include<bits/stdc++.h>
using namespace std;

int main(){

    int n ; 
    cin>>n;
    vector<int> v(n);
    int mx=INT16_MIN;
    for(int i = 0 ; i< n ;i++){
        cin>>v[i];
        if(mx< v[i]){
            mx=v[i];
        }
    }
    int ans ; 
    vector<int> fq(mx+1,0);
    for(int i = 0 ; i< n ;i++){
        fq[v[i]]++;
    }
    for(int i =mx ; i>=1 ;i--){
        int cnt = 0  ; 
        for(int j = i ; j<=mx;j=j+i){
            cnt+=fq[j];
            if(cnt>=2){
                cout<<i<<endl;
                return 0;
            }
        }
    }
    
        }