
//2D Matrix Multiplication using functions
#include<stdio.h>
void multiplyMatrices(int r1,int c1,int r2,int c2,int A[r1][c1], int B[r2][c2], int result[r1][c2]){
    //Function to multiply matrices
    for(int i=0; i<r1; i++){
        for(int j=0; j<c2; j++){
            result[i][j] = 0;
            for(int k=0; k<c1; k++){
                result[i][j] += A[i][k] * B[k][j];
            }
         }
      }
   }
   //Function to print a matrix
    void printMatrix(int rows,int cols,int matrix[rows][cols]){
    for(int i=0; i<rows; i++){
        for(int j=0; j<cols; j++){
            printf("%d ",matrix[i][j]);
          }
        printf("\n");
      }
   }
   int main(){
    //Input Dimension
       int r1,r2,c1,c2;
       printf("Enter rows and columns of first matrix :");
       scanf("%d %d", &r1,&c1);
       printf("Enter rows and columns of second matrix : ");
       scanf("%d %d", &r2, &c2);
       int A[r1][c1],B[r2][c2],result[r1][c2];
       if(c1 != r2){
           printf("Matrix multiplication is not possible");
       }

       else{
        //Input first matrix
           printf("Enter elements of first matrix A :");
           for(int i=0; i<r1; i++){
               for( int j=0; j<c1; j++){
                   scanf("%d", &A[i][j]);
               }
           }
           //Input second matrix
           printf("Enter elements of second matrix:\n");
           for(int i = 0; i < r2; i++){
              for(int j = 0; j < c2; j++){
                  scanf("%d", &B[i][j]);
               }
           }
           multiplyMatrices(r1, c1, r2, c2, A, B, result);
           printf("Resultant matrix:\n");
           printMatrix(r1,c2,result);
        
          }
           return 0;
      }
    


