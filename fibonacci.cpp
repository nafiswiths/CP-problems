#include <iostream>
using namespace std ;
int main (){
int n ; 
cin >> n ;
 int a = 0 , b=1 ,next,count = 0,ans; 

 
 for (int i = 3 ;  ; i++ ){

count++;

next = a+b;
a = b;
b=next;
if(count==n-2){
ans=next;
break;
}

 }
 cout<<ans;
 return 0;
}