#include<stdio.h>

int main()
{
    FILE *ab,*ac;
    char ch;
    printf("opening source file\n");
    ab=fopen("abc.txt","r");
    if(ab==NULL)
    {
        puts("source file not found\n");
        return 1;
    }
    printf("opening target file \n");
    ac=fopen("new.txt","w");
      if(ac==NULL)
    {
        puts("target file not found ;o");
        fclose(ab);
        return 1;
    }
    printf("copying contents of source to target \n");
    while(1)
    {
        ch=fgetc(ab);
        if(ch ==EOF)
        break;
        else
        {
            fputc(ch,ac);
        }
    }
    fclose(ab);
    fclose(ac);
    printf("task done\n");
    return 0;
    
}