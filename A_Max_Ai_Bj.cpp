#include<bits/stdc++.h>
using namespace std ;


int main (){
    int n ; 
    cin>>n ; 
    int ara [n],arra[n];
  
for(int i =0 ; i<n;i++){

cin>>ara[i];
}
for(int i =0 ; i<n;i++){

cin>>arra[i];
}
int max1 =ara[0];
  int max2=arra[0]; 
for (int i =1 ; i< n ;i++){
    if(ara[i]>max1 ){
        max1 = ara[i];
    }
    if(arra[i]>max2 ){
        max2 = arra[i];
    }
}
cout<<max1+max2<<endl;

return 0 ;

}



