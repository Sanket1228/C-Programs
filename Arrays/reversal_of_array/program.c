#include <stdio.h>

void reverse(int arr[], int a){
    int temp;
    for(int i=0; i<(a/2); i++){
        temp = arr[i];
        arr[i] = arr[a-i-1];
        arr[a-i-1] = temp;
    }
}

int main(){
    int arr[] = {1,2,3,4,5,6,7};
    reverse(arr,7);
    printf("The reversal of array is ");
    for(int i=0; i<7; i++){
        printf("%d ",arr[i]);
    }
    return 0;
}