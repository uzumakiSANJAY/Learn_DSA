#include<stdio.h>
#include<stdlib.h>

int display(int arr[] , int size){
    for(int i = 0 ; i< size ; i++){
        printf("%d,",arr[i]);
    }
    printf("\n");
}
int arrayInsertElement(int arr[] , int totalArray , int size , int element , int index){
    if(size > totalArray){
        return -1;
    }
    else{
        for (int i = size  ; i >= index; i--)
        {
            arr[i+1] = arr[i];
        }
        arr[index] = element;
        size=size+1;
    }
}
int main(){
    int size = 5;
    int totalArray = 100;
    int element = 85;
    int index = 3;
    int arr[100] = { 1 , 2 ,3 ,4 , 5};
    printf("Before\n");
    display(arr , size);
    arrayInsertElement(arr, totalArray, size,element,index);
    size += 1;
    printf("After\n");
    display(arr , size);
}
