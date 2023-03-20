#include <stdio.h>
#include <stdlib.h>

int printArray(int arr[], int n)
{
    for (int i = 0; i < n; i++)
    {
        printf("%d,", arr[i]);
    }
    printf("\n");
};
void bubbleSortAdaptive(int arr[], int n)
{
    int temp;
    int isShorted = 0;
    for (int i = 0; i < n - 1; i++)
    {
        printf("Working on pass number %d\n",i+1);
        isShorted = 1;
        for (int j = 0; j < n - 1 - i; j++)
        {
            if (arr[j] > arr[j + 1])
            {
                temp = arr[j];
                arr[j] = arr[j+1];
                arr[j+1] = temp;
                isShorted = 0;
            }
        }
        if (isShorted)
        {
            return;
        }
    }
};
void bubbleSort(int arr[], int n)
{
    int temp;
    for (int i = 0; i < n - 1; i++)
    {
        printf("Working on pass number %d\n",i+1);
        for (int j = 0; j < n - 1 - i; j++)
        {
            if (arr[j] > arr[j + 1])
            {
                temp = arr[j];
                arr[j] = arr[j+1];
                arr[j+1] = temp;
            }
        }
    }
};

int main()
{
    printf("Good morning Sanjay.... Welcome Back....\n");
    int size = 6;
    // int A[] = {23, 12, 45, 68, 100, 34};
    int A[] = {1 ,  2 , 4 ,3 , 5 ,6};
    printArray(A, size);
    bubbleSort(A, size);
    printArray(A, size);
    bubbleSortAdaptive(A, size);
    printArray(A, size);
}