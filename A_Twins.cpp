#include<bits/stdc++.h>
using namespace std;
int main(){
    int n ; 
    cin>>n;
    vector<int> v(n);
    int sum = 0 ; 
    
    for(int i= 0  ; i <n ; i++){
        cin>>v[i];
        sum+=v[i];
    }
    sort(v.begin(),v.end(),greater<int>());
    int sum2=0,cnt=0;
    for(int i = 0 ; i<n ;i++){
        sum2+=v[i];
        cnt++;
        if(sum2>(sum-sum2)){
            break;
        }
    }
    cout<<cnt<<endl;
    

    
}