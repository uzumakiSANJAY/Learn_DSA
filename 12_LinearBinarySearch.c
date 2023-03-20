#include<stdio.h>

int linearSearch(int arr[], int used_size , int element){
    for (int i = 0; i < used_size; i++)
    {
        if (arr[i] == element)
        {
            return i;
        }
    }
}
int binarySearch(int arr[] , int used_size , int element){
    int low , mid , high;
    low = 0;
    high = used_size - 1;
    while (low <= high)
    {
        mid = (low+high)/2;
        if (arr[mid] == element)
        {
            return mid;
        }
        
    }
    
}

int main(){
    int arr[100] = {1,2,3,4,5,6,7,8,9,10};
    int used_size = 9;
    int element = 2;
    int searchIndex = linearSearch(arr ,used_size , element);
    printf("The element %d found in the index %d\n",element ,searchIndex );
}