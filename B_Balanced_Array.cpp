#include <bits/stdc++.h>
using namespace std;

int main() {
    
    int t;
    cin >> t;

    while (t--) {
        int n;
        cin >> n;
     if((n/2)%2 !=0){
        cout<<"NO"<<endl;
     }
     else{
        cout<<"YES"<<endl;
        int cnt =0 ;
        int sum1=0 ;
        int sum2 = 0 ;
        for(int i =2 ; i<=n ;i+=2){
            cout<<i<<" ";
            sum1+=i;
            cnt++;
            if(cnt==n/2){
                break;
            }

        }
        cnt=0;
        for(int i =1 ; i<=n ;i+=2){
            cout<<i<<" ";
            cnt++;
            sum2+=i;
            if(cnt==n/2-1){
                break;
            }

        }
        cout<<abs(sum1-sum2)<<" ";
        cout<<endl;
     }
        
         
    }

    return 0;
}