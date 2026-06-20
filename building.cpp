#include <bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t; 
   int  height[t];
   for(int i = 0 ; i < t ; i++){
    cin>>height[i];
   }
   int ans[t];
   for(int i = 0 ; i< t ; i++){
    if((i > i+1 &&  i+1 < i+2)||(i > i+1 &&  i+1 < i+2)== true){
        ans[i]=height[i];

    }
    else{
        continue;
    }
   }
   for(int i = 0 ; i < t;i++){
    cout<<ans[i]<<" ";
   }
    return 0;
}
