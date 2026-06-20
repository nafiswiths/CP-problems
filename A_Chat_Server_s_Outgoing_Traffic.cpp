#include<bits/stdc++.h>
using namespace std;
int main(){
string s ;
int cnt= 0 ,ans=0; 
   while(getline(cin,s)){
    if(s[0]=='+') cnt++;
    else if(s[0]=='-')cnt--;
    else{
       int x ;
        for(int i=0 ; i<s.size();i++ ){
            if(s[i]==':'){
                x = i;
            }
        }
        ans+=cnt*(s.size()-x-1);
    }
   }
    cout<<ans<<endl;
}


