#include<stdio.h>

   
int main()
{ 
//     FILE *f1;
//     f1=fopen("file.txt","r");
//     int cnt = 0 ; 
//     char c;
//     while(1){
//         c=getc(f1);
//         if(c==EOF)break;
//         else if(c==' ')cnt++;
//     }


//    printf("number of words %d",cnt+1);
//     fclose(f1);
FILE *f1,*f2,*f;
f=fopen("na.txt","r");
f1=fopen("ev.txt","w");
f2=fopen("od.txt","w");
int n  ;
while(1){
   fscanf(f,"%d",&n);
    if(n==EOF)break;
    else if (n%2 == 0){
    fprintf(f1,"%d ",n);
    }
    else{
       fprintf(f2,"%d",n);
    }
}


fclose(f);
fclose(f1);
fclose(f2);
}
