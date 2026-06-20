#include <bits/stdc++.h>
using namespace std;
int main(){
    int t ; 
    cin>>t ; 
    while(t--){
        int n ; 
        cin >> n ; 
        int ara  [n],neg = 0 , pos = 0 ;
        for(int i  = 0; i < n ; i++){
            cin>>ara[i];
            if(ara[i] == -1){
                neg++ ; 
            }
            else{
                pos++;
            }
        }
        
        if(neg > pos  ){
            if(n%2==0){
int f = neg-(n/2);
                cout<<f+((neg-f)%2)<<endl;

            }
            else{
                int s= (n+1)/2 -pos;
 cout<<s +((neg-s)%2) <<endl;


            }
        }
        else{
           cout<<0+(neg%2)<<endl;
            
        }
    }
}