#include<stdio.h>
#include<stdlib.h>
int fac(int n ){
    if(n==0){
        return 1 ;
    }
    int x ;
    x= n*fac(n-1);
    return x ;
}

int main(){
    

int n = 5 ; 
for (int i = 0  ; i<n ; i++){
    for(int j = 1   ; j<= n - i ; j++){
        printf(" ");
    }
    for (int k = 0 ; k <= i ;k++){
        int s = fac(i)/(fac(k)*(fac(i-k)));
        printf(" %d",s);
    }
    printf("\n");
}
}