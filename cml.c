#include<stdio.h>
#include<stdlib.h>
   
// int main(int argc,char const *argv[])
// { 
// int n = argc ;
// for(int i = 0 ; i< n ;i++){
//     printf("%d \n",(int)argv[i]);
// }

// return 0 ;
// }
int main(){
    int n ; 
    scanf("%d",&n);
    int *ptr ; 
    ptr=(int*)malloc(n*sizeof(int));
    for(int i = 0 ; i< n ; i++){
        scanf("%d",ptr+i);
    }
    int sum =0;
    for(int i = 0 ; i< n ; i++){
      sum+= *(ptr+i);
    }
    printf("%d",sum);

}
