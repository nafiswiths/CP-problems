#include<bits/stdc++.h>
using namespace std ;
using ll = long long ; 
int main(){

   string s ,sub ;
   cin>>s;
   cin>>sub;
   int si=sub.size();
   int i = 0 ,cnt=0,p;
   while(s.find(sub,i)!= string::npos){
    cnt++;
    p=s.find(sub,i);
    i=p+si;
   }
    cout<<cnt<<endl;
    
   
        
    }


    







