#include<stdio.h>
int main(){
int num ;
scanf("%d",&num);
int ans = 0,s=0,l=num;
while(l>0){
    int d;
d=l%10;
s+=d*d*d;
l/=10;
}
if(num== s){
    printf("yes\n");
}
else{
    printf("no\n");

}

return 0 ;
}