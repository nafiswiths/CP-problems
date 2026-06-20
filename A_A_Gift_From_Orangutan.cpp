#include <bits/stdc++.h>
using namespace std ;

int main() {
    int t ;
    cin>>t;
    while(t--){
        int n ;
        cin>>n;
        vector <int> v (n);
        for(int i = 0 ; i<n;i++){
            cin>>v[i];
        }
        sort(v.begin(),v.end());
       int b = v[n-1];
       int c = v[0];
        cout<<(b-c)*(n-1)<<endl;

    }
        
    return 0;
}
