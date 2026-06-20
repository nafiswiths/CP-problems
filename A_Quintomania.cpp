

#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
      bool ans = true ; 
        vector<int > v (n);
        for(int i= 0  ; i<n; i++)
        {
            cin>>v[i];
           
        }
        
        for(int  i = 1 ; i< n ; i++)
        {
            if(abs(v[i]-v[i-1])!= 7 && abs(v[i]-v[i-1])!= 5 )
            {ans = false ; 
            break ; 

            }

        }
        if(ans){
            cout<<"YES"<<endl;
        }
        else{
            cout<<"NO"<<endl;
        }
        
      
   
    }

    return 0;
}
