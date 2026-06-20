#include<bits/stdc++.h>
using namespace std;
#define ll long long 


int main(){
    int t ;
    cin>>t;
    while(t--){
        string s1 ;
        cin>>s1;
        int n = s1.size();
       string  s2=s1;
       
        reverse(s2.begin(),s2.end());
       string s=s1+s2;
       cout<<s<<endl;


    }




}