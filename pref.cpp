#include<bits/stdc++.h>
using namespace std ;
int main(){
int t ; 
cin>> t ; 
while(t--){
    int n ; 
    cin>>n ; 
    vector <int> v(n);
    vector <int > p(n,0);
    

    for (int i = 0 ;  i< n ; i++){
        cin>>v[i];
        

    }
    p[0]=v[0];
    unordered_map<int , int > fq;
    
    for(int i =1 ; i< n ; i++){
        p[i]= p[i-1]+v[i];

    }
    
    int  k ; 
    cin>>k;
    int cnt = 0 ;
    for(int i = 0 ; i< n ; i++ ){
        
     if(fq.find(p[i]-k) != fq.end() ){
            cnt+= fq[p[i]-k];
        }
        fq[p[i]]++;
       
    }
cout<<cnt<<endl;

    
} 
}






