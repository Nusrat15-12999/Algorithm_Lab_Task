
#include<stdio.h>
#include<conio.h>

int Bubble_Sort(int arr[],int n);

int main()
{
    int arr[50];
    int n,i,j,temp;

    printf("How many Number you want?? :");
    scanf("%d",&n);

    for(i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }

    printf("Numbers=");

    for(i=0;i<n;i++)
    {
        printf("%d ",arr[i]);
    }

    Bubble_Sort(arr,n);
    printf("\n\nBubble Sort=");

    for(i=0;i<n;i++)
    {
        printf("%d ",arr[i]);
    }

    getch();
}

 int Bubble_Sort(int arr[],int n)
{
    int i,j,temp;

    for(i=0;i<n-1;i++)
    {
        for(j=0;j<n-i-1;j++)
        {
            if(arr[j]>arr[j+1])
            {
                temp=arr[j];
                arr[j]=arr[j+1];
                arr[j+1]=temp;
            }
        }
    }
}

