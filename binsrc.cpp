#include <bits/stdc++.h>
using namespace std;
int main(){
     
    int  n,ans=0 ,in;
    cin>>n;
    vector <int> arra(n);
    
    for(int i =0;i< n  ;i++){
cin>>arra[i];

    }
   sort(arra.begin(),arra.end());
   int k ; 
   cin>> k;

   int s = 0 ,l = n-1 ;
   while(s<=l){
    int  m  = (s+l)/2;
    if(arra[m]==k){

    ans = 1 ;
    in = m;
    break;
    }
    if(arra[m ]> k ){
        l=m-1 ;
    }else{
        s=m+1;
    }
#include <bits/stdc++.h>
using namespace std;
int main(){
     
    int  n,ans=0 ,in;
    cin>>n;
    vector <int> arra(n);
    
    for(int i =0;i< n  ;i++){
cin>>arra[i];

    }
   sort(arra.begin(),arra.end());
   int k ; 
   cin>> k;

   int s = 0 ,l = n-1 ;
   while(s>=l){
    int  m  = (s+l)/2;
    if(arra[m]==k){

    ans = 1 ;
    in = m;
    }
    if(arra[m ]> k ){
        s=m+1 ;
    }else{
        l=m-1;
    }


   }
   if(ans){
    cout<<in<<endl;
   }
   else{
    cout<<"not found\n";
   }

    
    
    return 0 ;
}

   }
   if(ans){
    cout<<in<<endl;
   }
   else{
    cout<<"not found\n";
   }

    
    
    return 0 ;
}