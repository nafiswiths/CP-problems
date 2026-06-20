#include<bits/stdc++.h>
using namespace std ; 
int main(){
    int t ; 
    cin>>t ; 
    while(t--){
        string s  ; 
         cin>>s ;
         int ab=0 , ba=0;
         int n  = s.size();
         for(int i = 0 ; i<n-1;i++){
            if(s[i]!= s[i+1]){
             if (s[i] == 'a' && s[i+1] == 'b') ab++;
             if (s[i] == 'b' && s[i+1] == 'a') ba++;
            }
         }
         s[0]=s[n-1];
         cout<<s<<endl;
        //  if(ab==ba){
        //     cout<<s<<endl;
        //     continue;
        //  }
        //  if(ab>ba){
        //  for(int i = 0 ; i<n-1;i++){
        //     if(s[i]!= s[i+1]){
        //        if( s[i]=='a'){
        //         s[i]='b';
        //         ab--;
              
        //     }
        //     if(ab==ba){
        //         cout<<s<<endl;
        //         break;
        //     }
        //  }
        // }}
        // else {
        //  for(int i = 0 ; i<n-1;i++){
        //     if(s[i]!= s[i+1]){
        //        if( s[i]=='b'){
        //         s[i]='a';
        //         ba--;
              
        //     }
        //     if(ab==ba){
        //         cout<<s<<endl;
        //         break;
        //     }
        //  }
        // }}


    }
}
