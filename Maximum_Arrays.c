#include<stdio.h>
int main(){
    int num[5] = {23,67,65,34,12};
    int max=num[0];

    for(int i=0 ; i<5; i++){
        if(max < num[i]){
         max=num[i];
       }
    }
    printf("%d" , max);
    return 0;
}