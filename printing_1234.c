#include<stdio.h>
int main(){
   int i;
   int j;
    for(int i=1; i<=4; i++){
        for(int j=1; j<=i; j++){
            printf("%d" , j);
        }
        printf("\n");

    }
    return 0;
}