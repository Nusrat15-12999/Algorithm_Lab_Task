#include<stdio.h>
#include<conio.h>

  int Fibonacci(int n)
  {
    if (n <= 1)
        {
            return n;
        }
    else

        {
            return Fibonacci(n - 1)+Fibonacci(n - 2);

        }

  }

  int main()
  {
      int n;

        printf("How many number do you want??? :  ");
        scanf("%d",&n);

        int result=Fibonacci(n);
        printf("F%d = %d",n,result);

        getch();

  }
