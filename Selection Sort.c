#include <stdio.h>
#include<conio.h>


void selectionSort(int arr[], int n)
{
    int i, j, x;

    for (i = 0; i < n-1; i++)
    {
        x = i;
        for (j = i+1; j < n; j++)
          if (arr[j] < arr[x])
            x = j;

        swap(&arr[x], &arr[i]);
    }
}

void swap(int *p1, int *p2)
{
    int temp = *p1;
    *p1 = *p2;
    *p2 = temp;
}

void printArray(int arr[], int n)
{
    int j;
    for (j=0; j < n; j++)
        printf("%d ", arr[j]);
    printf("\n");
}


int main()
{

    int n,arr[100];
    printf("Enter Array Size :");
    scanf("%d",&n);

    for(int j=0;j<n;j++)
    {
        scanf("%d",&arr[j]);
    }

    selectionSort(arr,n);
    printArray(arr, n);

    getch();
}
