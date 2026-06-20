#include<bits/stdc++.h>
using namespace std ;
int main(){
int t ; 
cin>> t ; 
while(t--){
    long long n; 
    cin>>n ; 
    int cnt=0;
    vector< long long>  v(n);
        long long mx=-1;
        long long sum = 0 ;
        vector <long long > od;
for(int i = 0 ; i< n;i++)
{
    cin>>v[i];
    if(v[i]%2==0){
        sum+=v[i];
    }
    else{
        cnt++;
        mx=max(mx,v[i]);
        od.push_back(v[i]);
    }
} 
sort(od.begin(),od.end(),greater<int>());
long long sum2=0;

    for(int i = 0 ;i<od.size()/2;i++){
        sum2+=od[i];
    }
    if(cnt%2 !=0){
        sum2=sum2+od[(od.size()/2)];
    }


if(cnt){
cout<<sum+sum2<<endl;
}
else{
    cout<<0<<endl;
}

}
}
