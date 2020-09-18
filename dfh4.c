#include<stdio.h>

int main()
{
    FILE *ab;
    char a[40];
    ab=fopen("new.txt","a");
    if(ab==NULL)
    {
        printf("can'nt ope the file");
        return 1;
    }
    printf("enter new lines :\n");
    gets(a);
    while(1)
    {
        fputs(a,ab);
        
    }
    fclose(ab);

    return 0;
}