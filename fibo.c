#include<stdio.h>
void bin(int ara[],int n){
    int l=ara[0],h = n-1 ; 
    int key = 9 ;
    int ans = 0 ; 
    while(l<=h){
        int m =(l+h)/2;
        if(ara[m]==key){
            ans = 1 ;
            break ; 
        }
        else if (ara[m] > key){
            h=m-1;
        }
        else{
            l=m+1 ;
        }
    }
    if(ans){
        printf("found\n");
    }
    else{
        printf("npt found|n");
    }
}
int fac(int n ){
    if(n==0){
        return 1 ;
    }
    int x ;
    x= n*fac(n-1);
    return x ;
}
int fibb(int n ){
    if(n==1  ){
        return 1 ; 

    }
    else if( n ==0 ){
        return 0 ;
    }
  int x = fibb(n-1)+fibb(n-2);
  return x ;
}
int main()
{ int next ;
// int l =0 ,r=1 ;

// for(int i = 2 ; i<10 ; i++){
   
//     next=l+r;
    
//     l=r;
//     r=next
// ;}    

	// printf("%d",fibb(10));
int ara[6]={1,2,3,5,7,66};
bin(ara,6);
}
