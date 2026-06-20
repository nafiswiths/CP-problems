#include<bits/stdc++.h>
using namespace std ;



long long  fib(long long  n){
 if (n == 1) return 0; 
    if (n == 2) return 1; 

    long long a = 0, b = 1; 

    for (long long i = 3; i <= n; i++) {
        long long next = a + b; 
        a = b;            
        b = next;        
    }

    return b; 
}
int main(){
long long  n ,year; 
char button ;
cin>>n>>button;
long long number = fib(n);
if(button == 'F'){
year = 2024+number;
}
else if(button == 'P'){
    year = 2024-number;
}

if((year % 4 == 0 && year % 100 != 0) || (year % 400 == 0)){
    cout<<"Yes"<<endl;
} else{
    cout<<"No"<<endl;
}



    return 0 ;
}