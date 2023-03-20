#include<stdio.h>
#include<stdlib.h>

struct stack{
    int size;
    int top;
    int *arr;
};
int isEmpty(struct stack ptr){
    if (ptr.top == -1)
    {
        return 1;
    }
    else{
        return 0;
    }
}
int isFull(struct stack s){
    if (s.top == s.size-1)
    {
        return 1;
    }
    else
    {
        return 0;
    }  
}
int pushIntoStack(struct stack s , int data){
    if (isFull(s))
    {
        printf("Stack Overflowed\n");
    }
    else
    {
        s.top ++;
        s.arr[s.top] = data; 
    }
    
}

// int popFromStack(struct stack *s ){
//     if (isEmpty(s))
//     {
//         printf("Stack is empty\n");
//     }
//     else
//     {
//         s->top-- ;
//     }
    
// }
int main(){
    printf("Welcome Back Sanjay\n");
    struct stack s;
    s.size = 5;
    s.top = -1;
    s.arr = (int *)malloc(s.size * sizeof(int));
    printf("Stack has been created successfully\n");

    printf("%d\n",isFull(s));
    printf("%d\n",isEmpty(s));
    // printf("top1 %d\n",s.top);

    pushIntoStack(s , 45);
    s.top++ ;
    pushIntoStack(s , 45);
    s.top++ ;
    pushIntoStack(s , 45);
    s.top++ ;
    pushIntoStack(s , 45);
    s.top++ ;
    pushIntoStack(s , 45);
    s.top++ ;
    pushIntoStack(s , 45);
    s.top++ ;
    pushIntoStack(s , 45);
    s.top++ ;
    pushIntoStack(s , 45);
    s.top++ ;
    pushIntoStack(s , 45);
    s.top++ ;
    pushIntoStack(s , 45);
    s.top++ ;

    // printf("top2 %d\n",s.top);
    printf("%d\n",isFull(s));
    printf("%d\n",isEmpty(s));

    // popFromStack(s );
    // s.top-- ;

    // // printf("top2 %d\n",s.top);
    // printf("%d\n",isFull(s));
    // printf("%d\n",isEmpty(s));
}