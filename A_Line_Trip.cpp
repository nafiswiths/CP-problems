#include <bits/stdc++.h>
using namespace std ;

int main() {
    int t ; 
    cin>>t;
    while(t--){
        int n , x;
        cin>>n>>x;
        vector<int> d(n);
        for(int i = 0 ;i<n;i++){
            cin>>d[i];
        }
        if(n==1){
            cout<<max(d[0],(2*(x-d[0])))<<endl;
            continue;
        }
        int big= d[0]-0;
        for(int i = 0 ; i< n ; i++){if(i<n-1){
            big= max(big,d[i+1]-d[i]);
        }
        }
    
       big=max(big,(2*(x-d[n-1])));
        cout<<big<<endl;
    }
       
    return 0;
}
