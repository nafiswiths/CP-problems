#include<bits/stdc++.h>
using namespace std ;

int main(){
int t ; 
cin>>t;
while(t--){
  string s ;
  cin>>s;
  long long a=0,b;
  long long  n =s.size();
  
  
  for(int i = 0 ; i< n;i++){
    if(s[i]=='1'){
        a++;
    }
    }
    
    b=abs(n-a);
long long ans =min(a,b);
if(ans%2 ==1){
    cout<<"DA"<<endl;
}
else{
    cout<<"NET"<<endl;

}
  }
  
  

    return 0;
}