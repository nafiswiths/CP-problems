#include<bits/stdc++.h>
using namespace std;

int main() {
    int t; 
    cin >> t;
    while(t--) {
        long long n, m,a,b;
        cin >> n >> m;
         if(n>m){
            a= m ;
            b= n;
         }
         else{
            a=n;
            b=m;
         }

        
    
     
        if(n==m){
            cout<<0<<" "<<0<<endl;
        }

        else if(b-a==1){
             cout<<1<<" "<<0<<endl;
        }
        else{
          
  long long d = b-a ;
  long long r  = min(n%d ,d-(n%d));
    cout<<d<<" "<<r<<endl;
        
    }
    

    
}
    return 0;
}
