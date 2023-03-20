#include<stdio.h>
#include<stdlib.h>

struct Node{
    int data;
    struct Node *next;
};
int linkListTravesal(struct Node *ptr){
    while (ptr != NULL)
    {
        printf("%d,", ptr->data );
        ptr = ptr ->next;
    }
    printf("\n");
}
struct Node *deleteFromFirst(struct Node *head ){
    struct Node *p = head;
    struct Node *q = head->next;
    free(p);
    return q;
}
struct Node *deleteAtIndex(struct Node *head , int index){
    struct Node *p = head;
    struct Node *q = head->next;
    int i = 0;
    while (i != index -1)
    {
        p = p ->next;
        q = q-> next;
        i++;
    }
    p->next = q ->next;
    free(q);
    return head;
    
}
struct Node *deleteFromLast(struct Node *head){
    struct Node *p = head;
    struct Node *q = head ->next;
    while (q->next != NULL)
    {
        p = p->next;
        q= q->next;
    }
    p ->next = q->next;
    free(q);
    return head;
}
struct Node *deleteAtGivenValue(struct Node *head , int value){
    struct Node *p = head;
    struct Node *q = head->next;
    while (q->data != value)
    {
        p = p ->next;
        q = q-> next;
    }
    p->next = q->next;
    free(q);
    return head;
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
    forth ->next = NULL;
    linkListTravesal(head);
    // head = deleteFromFirst(head );
    // head = deleteAtIndex(head, 1);
    // head = deleteFromLast(head);
    head = deleteAtGivenValue(head ,  21);
    linkListTravesal(head);
}