#include <stdio.h>   

void fl(int n);
void wl(int n);

int main()
{
       int num;
       printf("Enter: ");
       scanf("%d", &num);
       
       fl(num);
       wl(num);
       
       return 0;
}

void fl(int n)
{
       int fact = 1;
       for(int i = n; i > 0; i--)
       {
              fact *= i;
       }

       printf("Factorial of %d is: %d \n", n, fact);
}

void wl(int n)
{
       int a = n;
       int fact = 1;

       while (a > 0)
       {
              fact *= a;
              a--;
       }

       printf("Factorial of %d is: %d \n", n, fact);
}

