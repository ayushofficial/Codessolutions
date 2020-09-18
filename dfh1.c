#include<stdio.h>

int main()
{
    int a,b,c;
    char ch;
    FILE *ay;
    printf("press 0 if you want to see the contents of the selected file:-");
    scanf("%d",&a);
    if(a!=0)
    {}
    else
    {
        ay=fopen("abc.txt","r");
        while(1)
        {
            ch=fgetc(ay);
            if(ch==EOF)
            break;
            printf("%c",ch);
        }
        fclose(ay);
    }
    return 0;

}