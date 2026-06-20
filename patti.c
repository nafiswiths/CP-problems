#include<stdio.h>
#include<stdlib.h>
   

int main(){
    int n = 5 ;
    
    
//     for(int i = 1  ; i <= n ; i++){
//     for(int j =1 ; j<=n-i; j++ ){
//        printf(" ");
//     }
// for(int k =  i ; k>0 ;k--){
//      printf(" %d",k);
   
// }

//     printf("\n");
// }
    for(int i = 1  ; i <= n ; i++){
        int t =1 ;
    for(int j =1 ; j<=n-i; j++ ){
       printf("  ");
    }
for(int k =  1; k <= 2*i-1;k++){
     printf("%d",t);
     if(k<i){
        t++;
     }
     else{
        t--;
     }
   
}

    printf("\n");
}

// for (int i = 1; i <= n; i++) {
//     for (int j = 1; j <= n; j++) {
//         printf("%d ", (i + j+1) % 2);
//     }
//     printf("\n");
// }


}
