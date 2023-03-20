#include<stdio.h>
#include<stdlib.h>
struct Node
{
    int data;
    struct Node *next;
};
void LinkListTravesal(struct Node *ptr){
    while(ptr!=NULL){
        printf("Element %d\n",ptr->data);
        ptr = ptr ->next;
    }
}
int main(){
    printf("Welcome Back Sanjay\n");
    struct Node *head = (struct Node *)malloc(sizeof(struct Node));
    struct Node *second= (struct Node *)malloc(sizeof(struct Node));
    struct Node *third= (struct Node *)malloc(sizeof(struct Node));
    struct Node *forth= (struct Node *)malloc(sizeof(struct Node));
    head->data = 7;
    head ->next = second;
    second ->data = 11;
    second ->next = third;
    third ->data = 14;
    third ->next = forth;
    forth ->data = 21;
    forth ->next = NULL;
    LinkListTravesal(head);
}