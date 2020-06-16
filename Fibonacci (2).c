
#include<stdio.h>
#include<conio.h>

int FibList(int n)
{
     int i,F[50];

     F[0]=0;
     F[1]=1;

    for( i=2;i<n;i++)
    {
        F[i]=F[i-1]+F[i-2];
    }

    printf("\nFibonacci Series :");
    for(i=0;i<n;i++)
    {
        printf("%d ",F[i]);
    }
    return F[n];

}

int main()
{
    int n;

    printf("How many number do you want??? :  ");
    scanf("%d",&n);

    FibList(n);

    printf("\n\n\n");

    getch();
}
