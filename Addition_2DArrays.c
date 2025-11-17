//Addition Of Matrices
#include<stdio.h>
    int main(){
    int r;
    printf("Enter values of r =");
    scanf("%d" , &r);
    int c;
    printf("Enter values of c =");
    scanf("%d" , &c);

    int A[r][c];
    printf("Enter elements of A= \n");
    for(int i=0; i<r; i++){
        for(int j=0; j<c; j++){
           printf("Elements of A =" ,i,j); 
           scanf("%d", &A[i][j]);
            
        }
    }
    int B[r][c];
    printf("Enter elements of B= \n");
    for( int i=0; i<r; i++){
        for(int j=0; j<c; j++){
            printf("Elementd of B = " ,i,j);
            scanf("%d", &B[i][j]);
        }
    }
      int sum[r][c];
      for(int i=0; i<r; i++){
        for(int j=0; j<c; j++){
            sum[i][j] = A[i][j] +  B[i][j];
        }
        printf("\n");
    }
      printf("Sum of elements A and B is = \n");
       for(int i=0; i<r; i++){
        for(int j=0; j<c; j++){
            printf("%d " , sum[i][j]);
        }
        printf("\n");
    }
      return 0;
    
}