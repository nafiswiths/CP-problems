#include<stdio.h>
#include<math.h>
#include<string.h>

int prime(int  n){
    int ans = 1 ;
    for(int i =2 ; i<=sqrt(n);i++){
        if(n%i == 0) ans = 0 ;
        break ; 
    }
    return ans ;
    
}
void supp(){
    int n ;

scanf("%d",&n);
int ans =0 ;
if(prime(n) ==1){
    ans =1 ;
while(n !=0){
    n=n/10;
    if(prime(n)==0){
        ans = 0;
        break ;
    }

}
if(ans){
    printf("superprime\n");
}
else{
    printf("nottt\n");
}
}
}
void sym(){
    int mat[3][3]= {1, 2 ,3,
    2,4, 5,
    3 ,5, 6};
    int ans = 1 ; 
    for(int  i = 0 ; i < 3 ; i++){
        for (int j = 0 ; j< 3 ; j++){
            if(mat[i][j] != mat[j][i]){
                ans = 0 ; 
                break;
            }
        }
    }

    if(ans){
        printf("trans");
    }else{
        printf("nooo");
    }
    
}

void secdiag(){
    int mat[3][3]={
        1 ,2 ,4,
        3,5,6,
        4,6,7
    };
    for(int i = 0 ; i<3 ; i++){
        printf("%d",mat[i][2-i]);

    }
    printf("\n");
    for(int i = 0 ; i<3 ; i++){
        printf("%d",mat[i][i]);

    }
}

int palindrome(char str[]){
    
    int ans = 1 ;
    gets(str);
    for(int i =0 ; i< strlen(str)/2 ;i++){
        if(str[i]!= str[strlen(str)-i-1]){
            ans = 0 ; 
            break;
        }
    }
    return ans ; 
}
struct com{
    float real ; 
    float img;

};
 
struct com new(struct com c1, struct com c2 )
{
    struct com  ans ; 
    ans.real=c1.real+ c2.real;
    ans.img=c1.img+c2.img;

    return ans ;
};

void palstr(){
    char str[100];
    gets(str);
    int s=0 ,e; 
    int cnt=0; 

    for (int i = 0 ; i<= strlen(str);i++){
        if(str[i]==' ' || str[i]== '\0'){
            e=i-1;
            int ans = 1 ;
            int l =e-s+1;

            for(int k =s ; k< l/2;k++){
                if(str[k]!= str[l-1-k]){
                    ans = 0 ; 
                    break;
                }
            }
            if(ans){
                cnt++;
            }
            s=i+1;
        }
        

    }
    printf("%d",cnt);

}

   
int main()
{ 
    // supp();
// sym();
// secdiag();
// struct com c1,c2 ,c3;
// c1.real = 3 ; 
// c2.real = 2 ;
// c1.img=4 ;
// c2.img=-4 ;
// c3 = new(c1,c2);
// printf("%f+%fi\n",c3.real , c3.img);
// printf("%d",sizeof(c1));

palstr();
}
