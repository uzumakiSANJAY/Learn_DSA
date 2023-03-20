#include<stdio.h>
#include<stdlib.h>

struct circular_queue{
    int size;
    int f;
    int r;
    int *arr;
};

int isFull(struct circular_queue *q){
    if ((q->r+1) % ((*q).size) == q->f)
    {
        return 1;
    }
    else
    {
        return 0;
    }
}
int isEmpty(struct circular_queue *q){
    if (q->r == (*q).f)
    {
        return 1;
    }
    else
    {
        return 0;
    }
}
int enqueue(struct circular_queue *q , int val){
    if (isFull(q))
    {
        printf("The queue is full\n");
    }
    else
    {
        q->r = (q->r+1) % ((*q).size);
        q->arr[q->r] = val;
    }
}
int dequeue(struct circular_queue *q){
    if (isEmpty(q))
    {
        printf("The queue is empty\n");
    }
    else
    {
        q->f = (q->f+1) % ((*q).size);
    }
}
int main(){
    printf("Welcome back Sanjay \n");
    struct circular_queue q;
    q.size = 4;
    q.f = q.r = 0;
    q.arr = (int *)malloc(q.size * sizeof(int));
    if (isEmpty(&q))
    {
        printf("The queue is empty \n");
    }
    else{
        printf("The queue is not empty \n");
    }
    enqueue(&q , 12);
    enqueue(&q , 12);
    enqueue(&q , 12);
    enqueue(&q , 12);
    enqueue(&q , 12);
    if (isEmpty(&q))
    {
        printf("The queue is empty \n");
    }
    else{
        printf("The queue is not empty \n");
    }
    dequeue(&q);
    dequeue(&q);
    dequeue(&q);
    dequeue(&q);
    dequeue(&q);
    if (isEmpty(&q))
    {
        printf("The queue is empty \n");
    }
    else{
        printf("The queue is not empty \n");
    }
}