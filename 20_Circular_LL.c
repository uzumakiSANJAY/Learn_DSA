#include<stdio.h>
#include<stdlib.h>

struct Node{
    int data;
    struct Node *next;
};
int linkListTravesal(struct Node *head){
    struct Node *ptr = head;
    do{
        printf("%d,", ptr->data );
        ptr = ptr ->next;
    }while (ptr != head);
    printf("\n");
}
struct Node *insertAtFirst(struct Node *head , int data){
    struct Node *ptr = (struct Node *)malloc(sizeof(struct Node));
    ptr ->data = data;
    struct Node *p = head ->next;
    while (p->next != head)
    {
        p = p ->next;
    }
    p ->next = ptr; 
    ptr ->next = head;

    return ptr;
}
int main(){
    printf("Welcome Back Sanjay\n");
    struct Node *head = (struct Node * )malloc(sizeof(struct Node));
    struct Node *second = (struct Node * )malloc(sizeof(struct Node));
    struct Node *third = (struct Node * )malloc(sizeof(struct Node));
    struct Node *forth = (struct Node * )malloc(sizeof(struct Node));
    head ->data = 7;
    head -> next = second;
    second ->data = 14;
    second ->next = third;
    third ->data = 21;
    third ->next = forth;
    forth ->data = 28;
    forth ->next = head;
    printf("Before Insert\n");
    linkListTravesal(head);
    head = insertAtFirst(head , 45);
    head = insertAtFirst(head , 54);
    head = insertAtFirst(head , 68);
    printf("After Insert\n");
    linkListTravesal(head);
}