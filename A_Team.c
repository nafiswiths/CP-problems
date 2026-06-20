#include<stdio.h>
#include<string.h>
int main()
{
int x,p=0 ;
scanf("%d",&x);
for(int i = 0 ; i < x ; i++){
    int a,b,c;
    scanf("%d %d %d",&a,&b,&c);
if(a+b+c >=2){
    p++;
}
}
printf("%d",p);
    return 0;
}