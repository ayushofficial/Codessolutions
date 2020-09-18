#include <stdio.h>
int main()
{
    int a=0,b=0,c=0,d=0;
    FILE *ab;
    char ch;
    ab=fopen("abc.txt","r");
    while(1)
    {
        ch=fgetc(ab);
        if(ch==EOF)
        break;
        a++;
        if(ch==' ')
        b++;
        if(ch=='\n')
        c++;
        if(ch=='\t')
        d++;
    }
    fclose(ab);
    printf("number of characters=%d\n",a);
    printf("number of blaks=%d\n",b);
    printf("number of lines=%d\n",c+1);
    printf("number of tabs=%d\n",d);

    return 0;
}