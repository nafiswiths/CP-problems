#include<stdio.h>
int main()
{
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
