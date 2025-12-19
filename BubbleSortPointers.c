#include<stdio.h>
int main(){
    int n;
    printf("Enter number :");
    scanf("%d", &n);

    int arr[n];
    int *ptr=arr;
    int temp;
    for(int i=0; i<n; i++){
        scanf("%d", ptr+i);
    }
        for(int i=0; i<n-1; i++){
            for(int j=0; j<n-1-i; j++){
                if(*(ptr+j) < *(ptr+j+1)){
                    temp=*(ptr+j);
                    *(ptr+j)=*(ptr+j+1);
                    *(ptr+j+1)=temp;
                }
            
             }
        }
        printf("Sorted array");
        for(int i=0;i<n; i++){
            printf("%d", *(ptr+i));
        }
    
}