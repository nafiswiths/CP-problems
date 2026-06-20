#include<stdio.h>
#include<string.h>
int main()
{char word [100];
int x ;
scanf("%d",&x);
for(int i = 0 ; i < x ; i++){
    scanf("%s",word);
int size = strlen(word);

if(size > 10){
    printf("%c%d%c\n",word[0],size-2,word[size-1]);
}else{
    printf("%s\n",word);
}
}


    return 0;
}