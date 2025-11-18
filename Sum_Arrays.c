#include<stdio.h>
int main(){
      int sum=0;
  int num[4]= {1,2,3,7};
  
  for(int i=0; i<4; i++){
    sum = sum += num[i];
   }

  printf("%d" , sum);
    return 0;
}