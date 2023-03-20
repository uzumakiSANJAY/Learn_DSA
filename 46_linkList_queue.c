#include <stdio.h>
#include <stdlib.h>

struct Node
{
    int data;
    struct Node *next;
};

struct Node *f = NULL;
struct Node *r = NULL;

int linkListTravalsal(struct Node *ptr)
{
    printf("Elements in the linkLists:\n");
    while (ptr != NULL)
    {
        printf("%d,", ptr->data);
        ptr = ptr->next;
    }
    printf("\n");
}
void enqueue(int data)
{
    struct Node *ptr = (struct Node *)malloc(sizeof(struct Node));
    if (ptr == NULL)
    {
        printf("Queue is full\n");
    }
    else
    {
        ptr->data = data;
        ptr->next = NULL;
        if (f == NULL)
        {
            f = r = ptr;
        }
        else
        {
            r->next = ptr;
            r = ptr;
        }
    }
}
int dequeue(){
    struct Node *ptr = f;
    f = f->next;
    free(ptr);
}

int main()
{
    printf("Welcome Back Sanjay\n");
    linkListTravalsal(f);
    enqueue(45);
    enqueue(47);
    linkListTravalsal(f);
    dequeue();
    linkListTravalsal(f);
}