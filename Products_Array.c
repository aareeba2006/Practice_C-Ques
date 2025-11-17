#include<stdio.h>
int main(){
      int prod=1;
  int num[3]= {1,3,3};
  
  for(int i=0; i<3; i++){
   prod = prod * num[i];
   }

  printf("%d " , prod);
    return 0;
}