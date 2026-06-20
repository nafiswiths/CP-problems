#include<bits/stdc++.h>
using namespace std;
int main(){
string s ;
cin>>s;
int ans=-1;
for(int i = 0 ; i<s.size();i++){
    if(s[i]=='0'){
        ans=i;
        break;
    }
}
if(ans==-1){
    s.erase(0,1);
    cout<<s<<endl;
}
else{
    s.erase(ans,1);
    cout<<s<<endl;
}
  
}