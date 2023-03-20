#include<stdio.h>
#include<stdlib.h>

struct queue
{
    int size;
    int f;
    int r;
    int *arr;
};
int isFull(struct queue *q){
    if (q->r == q->size -1)
    {
        return 1;
    }
    else
    {
        return 0;
    }
    
}
int isEmpty(struct queue *q){
    if (q->r == q->f)
    {
        return 1;
    }
    else
    {
        return 0;
    }
    
}
void enqueue(struct queue *q , int data){
    if (isFull(q))
    {
        printf("The queue is full\n");
    }
    else
    {
        q->r++;
        q->arr[q->r] = data;
    }
    
}
int dequeue(struct queue *q  ){
    int a = -1;
    if (isEmpty(q))
    {
        printf("The queue is empty\n");
    }
    else
    {
        q->f++;
        int a = q->arr[q->f];
    }
    return a;
}
int main(){
    printf("Welcome Back Sanjay\n");
    struct queue q;
    q.size = 2;
    q.f = q.r = -1;
    q.arr = (int *)malloc(q.size *sizeof(int));
    if (isEmpty(&q))
    {
        printf("The queue is empty\n");
    }
    else
    {
        printf("The queue is not empty\n");
    }
    
    enqueue(&q , 45);
    enqueue(&q , 45);
    dequeue(&q);
    dequeue(&q);

    if (isEmpty(&q))
    {
        printf("The queue is empty\n");
    }
    else
    {
        printf("The queue is not empty\n");
    }
    return 0;
}
