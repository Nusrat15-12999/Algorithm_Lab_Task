
#include <stdio.h>
#include<conio.h>
int arr[100];

void swap(int *p1, int *p2)
{
    int temp = *p1;
    *p1 = *p2;
    *p2 = temp;
}

void QuickSort(int arr[],int f,int l)
{
    int i,j,n;

    if(f<l)
    {
        i=f+1;
        j=l;

        while(arr[i]<arr[f])
        {
            i++;
        }
        while(arr[j]>arr[f])
        {
            j--;
        }


        while(i<j)
        {
            swap(&arr[i], &arr[j]);
            while(arr[i]<arr[f])
            {
                i++;
            }
            while(arr[j]>arr[f])
            {
                j--;
            }

        }
        swap(&arr[j], &arr[f]);

        QuickSort(arr,f,j-1);
        QuickSort(arr,j+1,l);


    }
}

int main()
{

    int n,i,j;
    printf("Enter Array Size :");
    scanf("%d",&n);
    printf("Enter numbers:");
    for( i=0; i<n; i++)
    {
        scanf("%d",&arr[i]);
    }

    QuickSort(arr,0,n-1);

    printf("Sorted Number:");
     for (i = 0; i < n; i++)
    {
        printf(" %d", arr[i]);
    }


    getch();
}
