#include<stdio.h>
int main(){

    int n = 5 ;
    int m = -n++;
    int q = -(++n) ;
    printf("%d %d",m,q) ;
      return 0 ; 
}