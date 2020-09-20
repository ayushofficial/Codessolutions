#include<stdio.h>
int factorial(int);
int main()
{
    int a;
    int b;
    printf("plz enter the number\n");
    scanf("%d",&a);
    b=factorial(a);
    printf("\nfactorial is %d",b);
    return 0;
}
int factorial(int x)
{
    int c;
    if (x==1)
    {
        c=1;
    }
    else
    {
        c=x*factorial(x-1);
    }
     return c;
}