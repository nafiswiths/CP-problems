#include<bits/stdc++.h>
using namespace std ;
int main(){
int t ; 
cin>> t ; 
while(t--){
    int n ; 
    cin>>n ; 
 
    vector <int> v ;
    if(n==0 ){
        cout<<0<<endl;
        continue;
    }
    string ns = to_string(n);
    map<char, int> mp;
    int ans ;
    int s = ns.size();
    for(auto  fq : ns)
    {
        mp[fq]++;
    }
    if(mp[5]>0 && mp[0]>0){
        int a=-1,b;
        int ans = 0 ; 
        for(int i=s-1; i>=0;i--){

            if(ns[i]=='0'){a = i ;}
            else if(ns[i]=='5'){
                if(a!= -1 ){
                    b= i ; 
                    ans =1 ; 
                    break ; 
                }
            }
            
        }
        if(ans ){
            
            v.push_back(min(s-abs(a-b)+1,abs(a-b)-1));

        }
    if(mp[7]>0 && mp[5]>0){
        int a=-1,b;
        int ans = 0 ; 
        for(int i=s-1; i>=0;i--){

            if(ns[i]=='5'){a = i ;}
            else if(ns[i]=='7'){
                if(a!= -1 ){
                    b= i ; 
                    ans =1 ; 
                    break ; 
                }
            }
            
        }
        if(ans ){
             v.push_back(min(s-abs(a-b)+1,abs(a-b)-1));

        }
    }
     if(mp[2]>0 && mp[5]>0){
        int a=-1,b;
        int ans = 0 ; 
        for(int i=s-1; i>=0;i--){

            if(ns[i]=='5'){a = i ;}
            else if(ns[i]=='2'){
                if(a!= -1 ){
                    b= i ; 
                    ans =1 ; 
                    break ; 
                }
            }
            
        }
        if(ans ){
            v.push_back(min(s-abs(a-b)+1,abs(a-b)-1));

        }
        
    }
     if(mp[0]>1){
        int a=-1,b;
        int ans = 0 ; 
        for(int i=s-1; i>=0;i--){

            if(ns[i]=='0'){a = i ;}
            else if(ns[i]=='0'){
                if(a!= -1 ){
                    b= i ; 
                    ans =1 ; 
                    break ; 
                }
            }
            
        }
        if(ans ){
            v.push_back(min(s-abs(a-b)+1,abs(a-b)-1));
        }
        
    }
     if(mp[0]==1){
        
        
       
     v.push_back(s-1);

        
        
    }

    
    
    int real ;
    real=*min_element(v.begin(),v.end());
    
    cout<<real<<endl;
    

}
}
}