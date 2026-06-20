#include<stdio.h>
int fac(int n ){
    if(n==0){
        return 1 ;
    }
    int x ;
    x= n*fac(n-1);
    return x ;
}
int main()
{
    
	
}
