#include<stdio.h>
#include<conio.h>
int main()
{
    int n,i,arr[50];

    printf("Enter size:");
    scanf("%d",&n);

    for(i=0; i<n; i++)
    {
        scanf("%d",&arr[i]);
    }

    int left,right,mid,key ;
    left=0;
    right=n-1;
    mid=(left+right)/2;

    printf("Enter Search Key:");
    scanf("%d",&key);

    while(left<=right)
    {
        if(key<arr[mid])
        {
            right=mid-1;
        }
         else if(key>arr[mid])
        {
            left=mid+1;
        }
        else if(key==arr[mid])
        {
            printf("Location is :%d",mid);
            break;
        }

        mid=(left+right)/2;
        if(left>right)
        {
            printf("not found");
        }
    }
    getch();
}
