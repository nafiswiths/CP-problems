#include<stdio.h>
int main (){
char s [100];
gets(s);
char temp ; 
for ( int i = 0 ; s[i] != '\0';i=i+2){
for (int j = i+2 ; s[j] !='\0';j=j+2 ){
if(s[j]<s[i]){
    temp= s[j];
s[j]=s[i];
s[i]= temp ;
}

}

}

    printf("%s",s);














    return 0 ;
}
