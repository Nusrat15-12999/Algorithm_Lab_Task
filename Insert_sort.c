#include<stdio.h>

void insertionSort(int arr[], int n)
{
    int i, key, j;
    for (j = 2; j < n; j++) {

        key = arr[j];
        i = j - 1;


        while (i >= 0 && arr[i] > key) {
            arr[i + 1] = arr[i];
            i = i - 1;
        }
        arr[i + 1] = key;
    }

    for (j = 0; j < n; j++)
    {
        printf("%d ", arr[j]);

    }
    printf("\n");
}




int main()
{

    int n,arr[50];
    printf("How many Number you want?? :");
    scanf("%d",&n);

    for(int j=0;j<n;j++)
    {
        scanf("%d",&arr[j]);
    }

    insertionSort(arr,n);


    return 0;
}
