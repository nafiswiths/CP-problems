#include<bits/stdc++.h>
using namespace std ;
int main(){
int t ; 
cin>> t ; 
while(t--){
    long long n,m;
    
    cin>>n>>m;
    pair<int  , int > p[n];
    
    for(int i = 0 ; i< n ; i++){
        cin>>p[i].first>>p[i].second;

    }

    int point = 0 ,l ;
     for(int i = 0 ; i< n-1 ; i++){
        int k =p[i+1].first - p[i].first;
        if( k>1){
            if(p[i+1].second == p[i].second){
                l= (k%2==0)?k:k-1;
                point+=l;
            }
            else{
                l=k%2==0?k-1:k;
                point+=l;
            }

        }
     }
        int pp=m-p[n-1].first;
        if(pp>0){
            pp++;
        }
        
        cout<<point+pp<<endl;
        

    }


    
} 






