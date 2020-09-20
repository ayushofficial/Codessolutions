#include<stdio.h>

int fabonicci(int);
int main()
{
    int a,c;
    printf("plz enter the in fabonicci series which number you want\n");
    scanf("%d",&a);
    c=fabonicci(a);
    printf("\n%d is the %dth term in fabonicci series",c,a);
    return 0;

}

int fabonicci(int x)
{
    int b;
    if (x==1||x==2)
    {
        b=1;
    }
    else
    {
        b=fabonicci((x-1))+fabonicci((x-2));
    }
    
    return b;
    
}