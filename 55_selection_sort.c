#include <stdio.h>
#include <stdlib.h>

int printArray(int A[], int n)
{
    for (int i = 0; i < n; i++)
    {
        printf("%d,", A[i]);
    }
    printf("\n");
};

void selectionSort(int A[] , int n){
    for (int i = 0; i < n ; i++)
    {
        int indexMin = i;
        for (int j = i+1; j < n; j++)
        {
            if (A[j] < A[indexMin])
            {
                indexMin = j;
            }
        }
        int temp = A[i];
        A[i] = A[indexMin];
        A[indexMin] = temp;
    }
    
};

int main()
{
    printf("Welcome Back Sanjay \n");
    int size = 6;
    int A[] = {3, 8, 98, 45, 2, 100};
    printArray(A , size);
    selectionSort(A, size);
    printArray(A , size);
};