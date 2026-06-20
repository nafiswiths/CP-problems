#include <bits/stdc++.h>
#include <string>
using namespace std;
int close_point(const int ara[],int s){
    for(int i = 1 ; i < s;i++ ){
if(abs(ara[i]-ara[i-1]) >=2){
    return 1; 
} 
   
    
   
        
    } return 0;
}
int main() {
   int t ; 
   while (t--)
   {int x ; 
   cin>>x ;
   int ara[x];
   for(int i = 0 ; i < x ; i++){
    cin >> ara [i];
   }
   string m = close_point(ara,x) == 1 ? "YES":"NO";
   cout<<m<<endl;
   delete[]ara;
   }
   
    return 0;
}
