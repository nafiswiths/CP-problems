

#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
       int count1 = 0 ; 
        vector<int > v(2*n);
        for(int i= 0  ; i<2*n; i++){
            cin>>v[i];
            if(v[i]==1){
                count1++;
            }
        }
        if(count1%2 == 0 ){
            if(count1>n){

           
                cout<<0<<" "<<n-abs(count1 - n)<<endl;}
                else{
                    cout<<0<<" "<<count1 <<endl;
                }
            }
        
        else{
            
            cout<<1<<" "<<count1<<endl;
      
    }
 
    }

    return 0;
}
