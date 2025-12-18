#include<stdio.h>
int main(){
    int temp;
    // int arr[5]={1,2,3,4,5};
    int n;

    // Step 1: Input the size of array
    printf("Enter the size of the array: ");
    scanf("%d", &n);

    int arr[n];

    // Step 2: Input array elements
    printf("Enter %d elements:\n", n);
    for(int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }
    for(int i=0; i<5-1; i++){
        for(int j=0; j<5-1-i;j++){
            if(arr[j] < arr[j+1]){
                temp=arr[j];
                arr[j] = arr[j+1];
                arr[j+1] = temp;
            }
        }
    }
    printf("Sorted array :");
    for(int i=0; i<5; i++){
        printf("%d", arr[i]);
    }
}