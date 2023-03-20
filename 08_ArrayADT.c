#include<stdio.h>
#include<stdlib.h>

struct myArray
{
    int total_number;
    int used_number;
    int *ptr;
};

void createArray(struct myArray *a , int tSize , int uSize){
    (*a).total_number = tSize;
    (*a).used_number = uSize;
    (*a).ptr = (int *) malloc(tSize * sizeof(int));
}

int showVal(struct myArray *a){
    for (int i = 0; i < (*a).used_number; i++)
    {
        printf("%d\n",((*a).ptr)[i]);
    }
    return 0;    
}

int setVal(struct myArray *a){
    for (int i = 0; i < (*a).used_number; i++)
    {
        scanf("%d",&((*a).ptr)[i]);
    }
    return 0;
}

int main(){
    struct myArray marks;
    createArray(&marks, 10 , 2);
    printf("Setting the array value\n");
    setVal(&marks);
    printf("Showing the array value\n");
    showVal(&marks);
    return 0;
}