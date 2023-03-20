#include<stdio.h>
#include<stdlib.h>
int deletationFromArray(int arr[], int size , int index){
    for (int i = index; i < size; i++)
    {
        arr[i] = arr[i+1];
    }
    
}
int display(int arr[] , int size){
    for (int i = 0; i < size; i++)
    {
        printf("%d,",arr[i]);
    }
    printf("\n");
}
int main(){
    printf("Welcome Back Sanjay\n");
    int size = 6;
    int arr[100] = { 1 , 2 , 3 , 4 , 5 , 6 };
    display(arr , size);
    deletationFromArray(arr , size , 2);
    size -= 1;
    display(arr , size);
}