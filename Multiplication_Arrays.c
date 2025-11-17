#include<stdio.h>
int main(){
    int r1,c1;
    printf("Enter rows and column of matrix A =");
    scanf("%d %d" , &r1,&c1);
    int r2,c2;
    printf("Enter rows and column of matrix B =");
    scanf("%d %d" , &r2,&c2);

    if(c1 != r2){
        printf("Multiplication is not possible");
    }
    else{
    int A[r1][c1];
    printf("Enter elements of A= \n");
    for(int i=0; i<r1; i++){
        for(int j=0; j<c1; j++){
           printf("Elements of A =" ,i,j); 
           scanf("%d", &A[i][j]);
            
        }
    }
    int B[r2][c2];
    printf("Enter elements of B= \n");
    for( int i=0; i<r2; i++){
        for(int j=0; j<c2; j++){
            printf("Elements of B = " ,i,j);
            scanf("%d", &B[i][j]);
        }
    }
      int D[r1][c2];
      for(int i=0; i<r1; i++){
        for(int j=0; j<c2; j++){
            D[i][j] = 0;
            for(int k=0; k < c1; k++){
                 D[i][j] += A[i][k] *  B[k][j];
            }
           
        }
        printf("\n");
    
    }
      printf("Multiplication of elements  of A and B is = \n");
       for(int i=0; i<r1; i++){
        for(int j=0; j<c2; j++){
            printf("%d " , D[i][j]);
        }
        printf("\n");
    }
}
      return 0;
    
}