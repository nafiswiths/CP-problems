#include<stdio.h>
int main(){
//     int x = 23 ; 
//     int *ptr ;
//     ptr =&x ;
//     *ptr= 88;

//         //    printf("%d %d %d %d %d %d",x,ptr,*ptr,&x,*(&x),&ptr);
// printf("%d ",ptr);
// ptr++;
// printf("%d ",ptr);

int ara [4][4];

for(int i = 0  ; i< 4 ; i++){
    for(int j = 0 ; j<4 ; j++){
        scanf("%d",&ara[i][j]);
       

    }
}
int i ;
for( i = 0  ; i< 4 ; i++){
    int fq[1000]={0};
    for(int j = 0 ; j<4 ; j++){
        

    fq[ara[i][j]]++;
    }
    for(int j=0 ; j< 4 ;j++){
    if(fq[ara[i][j]] >0){
            printf("%d ",ara[i][j]);
        fq[ara[i][j]]=0;
        }}
    printf("\n");
}

return 0 ;
}