#include <bits/stdc++.h>
#include <string>
using namespace std;

int main() {
   int t ; 
   cin>>t; 
   while (t--)
   {
   int n ; 
   cin>>n;
   int ara[n];
   for(int i = 0 ; i < n ; i++){
    cin>>ara[i];
   }
   int sum = 0 ;
   for(int i = 0 ; i < n ; i++){
  sum+=ara[i];
   }
   int x = ((n/2)*n)-sum;
   cout<<x;
   }
   
    return 0;
}
