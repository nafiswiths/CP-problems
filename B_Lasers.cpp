#include<bits/stdc++.h>
using namespace std ;
int main(){
int t ; 
cin>> t ; 
while(t--){
    long long n,m,x,y; 
    cin>>n>>m>>x>>y ; 
    int cnt=0;
    int sm=0,sm2=0;
    vector< long long>  v(n);
        long long mx=-1;
        long long sum = 0 ;
        vector <long long > od(m);

for(int i = 0 ; i< n;i++)
{
    cin>>v[i];
    if(v[i]<y){
        cnt++;
    }
    if(v[i]==y){
        sm=1;
    }
    
} 
int cnt2=0;
for(int i=0 ; i< m;i++){
    cin>>od[i];
    if(od[i]<x){
        cnt2++;
    }
    if(od[i]==x){
        sm2=1;
    }
}




if(sm == 1 && sm2 == 1){
cout<<cnt+cnt2+1<<endl;
}
else{
    cout<<cnt+cnt2<<endl;
}

}
}
