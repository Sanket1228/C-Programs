#include <stdio.h>

void printArray(int arr[], int a){
    for(int i=0; i<a; i++){
        printf("The value of element %d is %d\n",i,arr[i]);
    }
}

int main(){
    int arr[] = {1,2,3,4,5,6};
    printArray(arr,6);
    return 0;
}