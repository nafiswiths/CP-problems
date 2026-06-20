#include<stdio.h>
#include<string.h>
#include<math.h>
void constrr(){
    char str1[100];
    char str2[100];
    char str[100];
    gets(str1);
    gets(str2);
    int i = 0 , j = 0 ; 
    while(str1[i] != '\0'){
        str[i]=str1[i];
        i++;
        j++;
    }
    j=0;
    while(str2[j] != '\0'){
        str[i]=str[j];
        i++;
        j++;
    }
    str[i]='\0';
    puts(str);
} 

void XOR(){
    int n ; 
    scanf("%d",&n);
    if((n^1) == (n+1)) printf("even");
    else printf("odd");
}

void palindrome(){
    char str[100];
    int ans = 1 ;
    gets(str);
    for(int i =0 ; i< strlen(str)/2 ;i++){
        if(str[i]!= str[strlen(str)-i-1]){
            ans = 0 ; 
            break;
        }
    }
    if(ans){
        printf("palindrome");
    }
    else{
        printf("NO");
    }
}

void constr(){
    char str1[100];
    char str2[100];
    char str[100];
    gets(str1);
    gets(str2);
    int i = 0 , j =  0 ;
    while(str1[i] != '\0') {
     str[i]=str1[i];
     i++;
     
    }
    while(str2[j] != '\0') {
     str[i]=str2[j];
     i++;
     j++;
    }
    str[i]= '\0';
    
    puts(str);
} 
int fac(int n ){
    if(n==0){
        return 1 ;
    }
    int x ;
    x= n*fac(n-1);
    return x ;
}


void sortstr(){
    char str[100] ;
   gets(str);
    for(int i = 0 ; i< strlen(str)-1; i++){
    for(int j = 0 ; j< strlen(str)-1-i; j++){
        if(str[j]>str[j+1]){
            char t = str[j];
            str[j]=str[j+1];
            str[j+1]=t;
        }

    }

}
puts(str);
}
void pascal(){
    int n = 5 ; 
for (int i = 0  ; i<n ; i++){
    for(int j = 1   ; j<= n - i ; j++){
        printf(" ");
    }
    for (int k = 0 ; k <= i ;k++){
        int s = fac(i)/(fac(k)*(fac(i-k)));
        printf(" %d",s);
    }
    printf("\n");
}
}

void patt1(){
    int n = 5 ;
     for(int i = 1  ; i <= n ; i++){
         for(int j =i ; j<=n ; j++ ){
            printf("%c ",'A'+j-1);
         }
         printf("\n");

     }
// A B C D E 
// B C D E
// C D E
// D E
// E
}
void patt2(){
    int n = 5 ;
     for(int i = 1  ; i <= n ; i++){
         for(int j =1 ; j<=i ; j++ ){
            printf("* ");
         }
         printf("\n");

     }
    //  * 
    //  * *
    //  * * *
    //  * * * *
    //  * * * * *
}

void patt3(){
    int n = 5 ;
    
    
    for(int i = 1  ; i <= n ; i++){
    for(int j =1 ; j<=i ; j++ ){
       printf("%d ",n-i+1);
    }
    printf("\n");

}
// 5 
// 4 4
// 3 3 3
// 2 2 2 2
// 1 1 1 1 1

}

void patt4(){
    int n = 5 ;
    
    
    for(int i = 1  ; i <= n ; i++){
    for(int j =1 ; j<=n-i; j++ ){
       printf(" ");
    }
for(int k =  1 ; k<=2*i-1 ;k++){
    printf("*");
}

    printf("\n");

}
}


void patt5(){
    int n = 5 ;
    
    for(int i = 1  ; i <= n ; i++){
        int t =1 ;
    for(int j =1 ; j<=n-i; j++ ){
       printf(" ");
    }
for(int k =  1; k <= 2*i-1;k++){
     printf("%d",t);
     if(k<i){
        t++;
     }
     else{
        t--;
     }
    
}printf("\n");
}

//      1
//     121
//    12321
//   1234321
//  123454321

}
void patt6(){
    int n = 5 ;
    
    
    for(int i = 1  ; i <= n ; i++){
    for(int j =1 ; j<=n-i; j++ ){
       printf("  ");
    }
for(int k =  1 ; k<=2*i-1 ;k++){
    if(k>=i) printf("%d",2*i -k);
    else printf("%d",k);
}

    printf("\n");
}
//         1
//       121
//     12321
//   1234321
// 123454321
}

void patt7(){
    int n = 5 ;
    
    
    for(int i = 1  ; i <= n ; i++){
    for(int j =1 ; j<=n-i; j++ ){
       printf(" ");
    }
for(int k =  1 ; k<=2*i-1 ;k++){
    if(k==1 || k== 2*i-1) printf("0");
    else printf("1");
}

    printf("\n");
}
//     0
//    010
//   01110
//  0111110
// 011111110
}

void sub(){
    char str1[]= "ini mini ponky";
    char str2[]="ponky";
    char *ptr;
    ptr=strstr(str1,str2);
    if(ptr!= NULL){
        printf("%d %d\n",ptr,str1);
        printf("found in %d",ptr-str1);
    }
    else {
        printf("nai");
    }
}



void fun1(){
    int n;
    scanf("%d",&n);
    int ara[10]={0};
    while(n>0){
        int r = n%10;
        ara[r]++;
        n=n/10;
    }
    for(int i = 0 ; i< 10 ; i++){
        printf("%d counts %d\n",i,ara[i]);
    }

}
void fib(int n){
    int t1=0,t2=1,ne;
    for(int i=2 ; i<n ;i++){
        ne=t1+t2;
        t1=t2;
        t2=ne;
    } 
    printf("%d th fibo is %d",n,ne);
}
int nfac(int n ){
    if(n==0|| n==1){
        return 1 ;
    }
    int x = n * nfac(n-1);
    return x ;

}
void rev(int n ){
    int rev =0;
    while(n>0){
    int rem = n%10;
    rev=10*rev + rem ;

    n=n/10;

    }
    printf("%d",rev);
}
void maks(){
    int ara[7];
    for(int i = 0 ; i<7;i++){
        scanf("%d",&ara[i]);
    }
    int m = ara[0];
    for(int i = 0 ; i< 7 ; i++){
        if(ara[i]> m){
            m=ara[i];
        }
    }
    printf("max is %d",m);
}
void secmaks(){
    int ara[7];
    for(int i = 0 ; i<7;i++){
        scanf("%d",&ara[i]);
    }
    int m ,sm;
 if(ara[0]>ara[1]){ m = ara[0]; 
 sm = ara[1];
 }
 else {m=ara[1];
 sm=ara[0]; }
    for(int i = 0 ; i< 7 ; i++){
        if(ara[i]> m){
           
            sm=m;
             m=ara[i];
        }
        else if(ara[i]>sm && m> ara[i]){
            sm=ara[i];
        }
    }
    printf("max is %d and wnd max  is %d",m,sm);
}

void dectobin(){
    int n ; 
    scanf("%d",&n);
     int ara[10];
     int i=0 ;
     while(n !=0){
        int r = n%2 ;
        ara[i]=r ; 
        n=n/2;
i++;
     }
     for(int j = i-1 ; j>= 0 ; j--){
        printf("%d",ara[j]);
     }

   

}


 int  dectobininrec( int n ){
    
     if ( n == 0){
        return 0 ;
     }
     else {
        return n%2+ 10*dectobininrec(n/2);
     }
}


int bintodecrec(int n ){
    if(n==0){
        return 0 ;
    }
    else{
        return n%10+ 2*bintodecrec(n/10);
    }
}


void dectooct(){
    int n ; 
    scanf("%d",&n);
     int ara[10];
     int i=0 ;
     while(n !=0){
        int r = n%8 ;
        ara[i]=r ; 
        n=n/8;
i++;
     }
     for(int j = i-1 ; j>= 0 ; j--){
        printf("%d",ara[j]);
     }
}
int dectooctrec(int n ){
    if(n==0){
        return 0 ;
    }
    else{
        return n%8 + 10*dectooctrec(n/8);
    }
}
int octtodecrec(int n ){
    if(n==0){
        return 0 ;
    }
    else{
        return n%10 + 8*octtodecrec(n/10);
    }
}



void bintodec(int n ){
    int  i =0,num=0;;
    while(n>0){
        int r = n%10;
        num+=r*pow(2,i);
        n=n/10;
        i++;


    }
    printf("%d",num);
}


void octodec(int n ){
    int  i =0,num=0;;
    while(n>0){
        int r = n%10;
        num+=r*pow(8,i);
        n=n/10;
        i++;


    }
    printf("%d",num);
}  


void matgun(){
    int mat1[3][3]={
        3,4,5,
        4,5,2,
        34,5,6
    };
    
    int mat2[3][2]={
        2,3,
        1,2,
        2,0
    };
    int matp[3][2]={0};
    for(int i = 0 ; i< 3; i++){
        for(int j = 0 ; j < 2 ; j++){
            for(int k = 0 ; k < 3 ; k++){
                matp[i][j]+=mat1[i][k]*mat2[k][j];
            }
        }
    }
    for(int i = 0 ; i< 3; i++){
        for(int j = 0 ; j <  2; j++){
           printf("%d ",matp[i][j]);
        }
        printf("\n");
    }

    
}

void gcdlcm(){
    int n1 , n2 ;
    scanf("%d %d",&n1,&n2);
    int k=n1*n2;
    while(n2>0){
        int r = n1%n2;
        n1=n2 ;
        n2 = r ;

    }
    printf("GCD is %d",n1);
    int lcm = k/n1;
    printf("%d",lcm);

}

void bubble (){
    int ara[6]={45,6,7,8,3,2};
    int n =  6 ;
    for(int i = 0 ; i< n-1 ; i++){
        
        for(int  j =0 ; j<n-i-1 ; j++){
            if(ara[j]>ara[j+1]){
            int t = ara[j];
            ara[j]=ara[j+1];
            ara[j+1]=t ;

            }
            
        }
            
    }
    for (int i= 0  ;i< n ; i++){
        printf("%d ",ara[i]);
    }
}

void selection(){
    int ara[6]={45,6,7,8,3,2};
    int n =  6 ;
    for(int i = 0 ; i< n-1 ; i++){
        int min = i ;
        for(int  j = i+1 ; j<n ; j++){
            if(ara[j]<ara[min]){
                min=j;
            }
            
        }
            int t = ara[i];
            ara[i]=ara[min];
            ara[min]=t ;

    }
    for (int i= 0  ;i< n ; i++){
        printf("%d ",ara[i]);
    }
}


void insertion(){
    int ara[6]={45,6,7,8,3,2};
    int n =  6 ;
    for(int i = 1; i< n; i++){
        int key = ara[i];
        int j = i-1;
        while(j>=0 && ara[j]> key){
            ara[j+1]=ara[j];
            j--;
        }
        ara[j+1]=key ;
    }
    for (int i= 0  ;i< n ; i++){
        printf("%d ",ara[i]);
    }

}
int main()
{ 
// fun1();
// fib(10);
// rev(34545);
// maks();
// secmaks();
// constr();
// sub();
// sortstr();
// patt1();
// patt2();
// patt3();
// patt4();
// patt5();
// patt6();
// patt7();
// dectobin();
// dectooct();
// printf("%d",dectobininrec(23));
// printf("%d",dectooctrec(23));
// bintodec(1101);
// octodec(34);
// printf("%d",bintodecrec(10111));
// XOR();
// palindrome();
// gcdlcm();
// sortstr();
// pascal();

selection();
printf("\n");
insertion();
printf("\n");
bubble();
}
