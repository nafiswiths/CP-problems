#include <bits/stdc++.h>
#include <string>
#include<math.h>
using namespace std;

int main() {
   int n ; 
   cin>> n ; 
   int num1[n],num2[n];
   for(int i = 0 ; i< n ; i++){
    cin>>num1[i];
   }
   for(int i = 0 ; i< n ; i++){
    cin>>num2[i];
   }
   sort(num1,num1+n);
   sort(num2,num2+n);
cout<<num1[n-1]+num2


    return 0;
}
