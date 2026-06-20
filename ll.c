#include<stdio.h>
#include<string.h>
// int pali(char ara[],int s,int e){
//     int ans = 1 ; 
//     for(int i = s ; i< e/2 ; i++ ){
//         if(ara[i]!= ara[e-1-i]){
//             ans = 0;boo
//             break ;
//         }
//     }
//     return  ans ;
// }
int main() {
    char ara[100];
    // fgets(ara,sizeof(ara),stdin);
    gets(ara);
    // ara[strlen(ara)+1]= '7';
    int s=0 , e ,cnt=0;
    for(int i =0 ; i<= strlen(ara);i++){
        if(ara[i]==' ' || ara[i]=='\0' ){
          e=i-1;
          int ans = 1 ;
          if(s<=e){
         while(s<e){
                if(ara[s]!= ara[e]){
                    ans = 0 ;
                    break;
                }
               
                s++;
                e--;
            }
            if(ans)cnt++;
            
            
          }
          printf("\n");
          s= i+1;
          

    }
    }
    printf("%d",cnt);

    

}
