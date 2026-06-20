#include <bits/stdc++.h>

using namespace std;

int main() {
    int t;
    cin >> t;
    while (t--) {
       int n ; 
       cin>> n;
       vector<int> v (n);
       
       for(int i = 0 ; i< n ; i++){
        cin>>v[i];
       }
       if(is_sorted(v.begin(),v.end())==0){
         cout<<0<<endl;
        dddd
       }
      else{
      
      int p,q,dif=v[n-1]-v[n-2];
      p=v[n-1];
      q=v[n-2];
      for(int i = 1 ; i< n ; i++){
        if(v[i]-v[i-1]<dif){
          dif=v[i]-v[i-1];
          p=v[i];
          q=v[i-1];
        }
      }
      cout<<dif/2 +1 <<endl;
      
      
      
      }

   
    }
    
    return 0;
}
