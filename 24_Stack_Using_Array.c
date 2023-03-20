#include<stdio.h>
#include<stdlib.h>

struct stack{
    int top;
    int *arr;
    int size;
};
int isEmpty(struct stack s){
    if (s.top == -1)
    {
        return 1;
    }
    else
    {
        return 0;
    }
}
int isFull(struct stack s){
    if (s.top == s.size)
    {
        return 1;
    }
    else
    {
        return 0;
    }
    
}



int main(){
    printf("Welcome Back Sanjay\n");
    struct stack s;
    s.size = 3;
    s.top = -1;
    s.arr = (int *)malloc(s.size * sizeof(int));
    //Pushing element in the stack;
    s.arr[0] = 3;
    s.top++;
    s.arr[1] = 4;
    s.top++;
    s.arr[2] = 5;
    s.top++;
    s.arr[3] = 8;
    s.top++;
    for (int i = 0; i < s.size; i++)
    {
        printf("%d,",s.arr[i]);
    }
    printf("\n");
    printf("########## %d",s.size);
    printf("\n");
    printf("top %d\n",s.top);
    //Checking the stack is empty;
    if (isEmpty(s))
    {
        printf("The stack is empty \n");
    }
    else
    {
        printf("This stack is not empty\n");
    }
    //Checking the stack is full;
    if (isFull(s))
    {
        printf("The stack is full\n");
    }
    else
    {
        printf("This stack is not full\n");
    }
    
    return 0;
}