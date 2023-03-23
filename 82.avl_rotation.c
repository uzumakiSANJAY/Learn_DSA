#include <stdio.h>
#include <stdlib.h>

struct Node
{
    int key;
    struct Node *left;
    struct Node *right;
    int height;
};

int getHeight(struct Node *n)
{
    if (n == NULL)
    {
        return 0;
    }
    else
    {
        return n->height;
    }
};


struct Node *createNode(int key)
{
    struct Node * n = (struct Node *)malloc(sizeof(struct Node ));
    n->key = key;
    n->left = NULL;
    n->right = NULL;
    n->height = 1;
    return n;
};

int maximum1(int a , int b){
    return a>b?a:b;
}

int getBalanceFactor(struct Node *n){
    if (n == NULL)
    {
        return 0;
    }
    else
    {
        return (getHeight (n ->left) - getHeight(n->right));
    }
};

struct Node *rightRotate(struct Node *y){
    struct Node *x=  y->left;
    struct Node *T2 = x->right;

    x->right = y;
    y->left = T2;

    y->height = 1+maximum1(getHeight(y->left), getHeight(y->right));
    x->height = 1+maximum1(getHeight(x->left), getHeight(x->right));

    return x;
};


struct Node *leftRotate (struct Node *x){
    struct Node *y=  x->right;
    struct Node *T2 = y->left;

    y->left = x;
    x->right = T2;

    y->height = 1+maximum1(getHeight(y->left), getHeight(y->right));
    x->height = 1+maximum1(getHeight(x->left), getHeight(x->right));

    return y;
}


struct Node *insert(struct Node *n , int key){
    if (n== NULL)
    {
        return createNode(key);
    }
    if(key < n->key){
        n->left = insert(n->left , key);
    }
    else if(key > n->key){
        n->right = insert(n->right , key);
    }

    n->height = 1 + maximum1(getHeight(n->left), getHeight(n->right));
    int bf = getBalanceFactor(n);

    // Left Left Case

    if (bf>1 && key < n->left->key)
    {
        return rightRotate(n);
    }
    
    // Right Right Case

    if (bf <-1 && key > n->right->key) 
    {
        return leftRotate(n);
    }
    

    // Left Right Case

    if (bf > 1 && key > n->left->key) 
    {
        n->left = leftRotate(n ->left);
        return rightRotate(n);
    }
    
    // Right Left Case

    if (bf <-1 && key < n->right->key) 
    {
        n->right = rightRotate(n ->right);
        return leftRotate(n);
    }
    return n;
}

void preOrder(struct  Node* n){
    if(n!=NULL){
        printf("%d ", n->key);
        preOrder(n->left);
        preOrder(n->right);
    }
}

int main()
{
    printf("Welcome Back Sanjay............\n");
    struct Node * root = NULL;
 
 
    root = insert(root, 1);
    root = insert(root, 2);
    root = insert(root, 4);
    root = insert(root, 5);
    root = insert(root, 6);
    root = insert(root, 3);
    preOrder(root);
    return 0;
}
