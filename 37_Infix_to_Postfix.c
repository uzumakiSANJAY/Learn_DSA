#include<stdio.h>
#include<stdlib.h>

struct stack
{
    int size;
    int top;
    int *arr;
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
int stackTop(struct stack sp){
    return sp.arr[sp.top];
}
int isFull(struct stack s){
    if (s.top == s.size -1)
    {
        return 1;
    }
    else
    {
        return 0;
    }
}

int main(){
    printf("Welcome Back Sanjay");
    struct stack s;
    s.size = 80;
    s.top = -1;
    s.arr = (int *)malloc(s.size * sizeof(int));
}