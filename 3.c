
#include<stdio.h>
#include<conio.h>

int Binary_search(int Arr[], int N, int K);

int main()
{

    int A[50];
    int n,i,key;

    printf("How many number do you want ???");
    scanf("%d",& n);

    for(i=0; i<n; i++)
    {
        scanf("%d",&A[i]);
    }

    printf("Numbers :");

    for(i=0; i<n; i++)
    {
        printf("%d ",A[i]);
    }


    printf("\nKey: ");
    scanf("%d",&key);


	int index = Binary_search(A, n, key);

	if (index != -1)
    {
       printf("Found at %d Position", index);
    }
	else
		printf("Not Found");

    getch();
}

int Binary_search(int Arr[], int N, int K)
{
	int low = 0, high = N - 1;
	int result = -1;

	while (low <= high)
	{
		int mid = (low + high)/2;

		if (K ==Arr[mid])
		{
			result = mid;
			high = mid - 1;
		}

		else if (K < Arr[mid])
			high = mid - 1;

		else
			low = mid + 1;
	}
	return result;
}
