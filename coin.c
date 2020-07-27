#include<stdio.h>

void coin_change(int coin[],int n)
{
    int i,j,k;
    for(i=1;i<n;i++)
    {
        k= coin[i];
        j=i-1;
        while(j>=0 && coin[i]<k)
        {
            coin[j+1]=coin[i];
            j=j-1;
        }
        coin[j+1]=k;
    }
}
void main()
{
    int a,i,tk,n;
    int coin[100];
    printf("\nEnter number:\n");
    scanf("%d",&n);
    printf("\nEnter coins;\n ");
    for(i=0;i<n;i++)
    {
        scanf("%d",&coin[i]);
    }
    coin_change(coin,n);
    printf("\nEnter amount\n:");
    scanf("%d",&tk);
    printf("\nMinimum used coin:\n");
    for(i=0;i<n;i++)
    {
        if(coin[i]<=tk)
        {
            a = tk/coin[i];
            printf("\nTotal Used coin = %d coin %d times\n",coin[i],a);
            tk = tk % coin[i];
        }
    }


}
