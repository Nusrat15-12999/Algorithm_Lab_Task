
#include<stdio.h>
#include<conio.h>
int main()
{
    int num[20],position=-1;
    int value,i,n;

    printf("How many Number: ");
    scanf("%d",&n);

    for(i=0;i<n;i++)
    {
        scanf("%d",&num[i]);
    }

    printf("Numbers= ");
    for(i=0;i<n;i++)
    {
        printf("%d ",num[i]);
    }

    printf("\nEnter a number for Searching: ");
    scanf("%d",&value);

    for(i=0;i<n;i++)
    {
        if(value==num[i])
        {
            position=i;
            break;
        }

    }
    if(position==-1)
    {
        printf("\n\"Product Not Available\"");
    }
    else
    {
        printf("\nPosition = %d Row.",position);
    }

    printf("\n\n\n");

    getch();

}
