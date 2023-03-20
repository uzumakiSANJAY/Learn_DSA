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
void insertIntoHead(struct Node *ptr , int element , struct Node *head){
    struct Node *newElement;
    newElement = (struct Node *)malloc(sizeof(struct Node) );
}
struct Node *insertAtFirst(struct Node *head , int data){
    struct Node *ptr = (struct Node *)malloc(sizeof(struct Node));
    ptr -> data = data;
    ptr ->next = head;
}
struct Node *insertAtIndex(struct Node *head ,int data , int index){
    struct Node *ptr =(struct Node *)malloc(sizeof(struct Node));
    ptr ->data =data;
    struct Node *p = head;
    int i = 0;
    while (i != index -1)
    {
        p = p ->next;
        i++;
    }
    ptr -> next = p ->next;
    p->next = ptr;
    return head;
    
}
struct Node * insertAtTheEnd(struct Node *head , int data){
    struct Node *ptr = (struct Node *)malloc(sizeof(struct Node));
    ptr -> data = data;
    struct Node *p = head;
    while (p->next != NULL)
    {
        p = p -> next;
    }
    p->next = ptr;
    ptr ->next = NULL;
    return head;
}
struct Node * insertAfterNode(struct Node *head , struct Node *previousNode , int data ){
    struct Node *ptr = (struct Node *)malloc(sizeof(struct Node));
    ptr -> data = data;

    ptr -> next = previousNode ->next;
    previousNode ->next = ptr;
    return head;
}
int main(){
    printf("Welcome Back Sanjay\n");
    struct Node *head;
    struct Node *second;
    struct Node *third;
    head = (struct Node *)malloc(sizeof(struct Node));
    second = (struct Node *)malloc(sizeof(struct Node));
    third = (struct Node *)malloc(sizeof(struct Node));
    head->data = 7;
    head ->next = second;
    second ->data = 11;
    second ->next = third;
    third ->data = 14;
    third ->next = NULL;
    printf("Before Insertation\n");
    LinkListTravesal(head);
    // head = insertAtFirst(head , 45);
    // head = insertAtIndex(head , 67 , 2);
    // head = insertAtTheEnd(head , 98);
    head = insertAfterNode(head , second , 67);
    printf("After Insertation\n");
    LinkListTravesal(head);
}