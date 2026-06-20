// #include "stdafx.h"
#include<stdio.h>

#include<windows.h>
Void Type(const * p ){
    if(NULL==p){
        return ;
    }
    while(*p){
        printf("%c\xDB",*p++);
        ::Sleep(30);
        printf("\b \b");
        ::Sleep(30);
    }
    ::Sleep(300);
}
int main(int argc,const char * argv[]){
    Type("hi wahssoos jjdjs... \n");
    return 0 ;
}