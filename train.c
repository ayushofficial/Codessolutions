#include<stdio.h>

void main()
{
    int a,b,c,d,e,f;
    float g;
    printf("plz enter your seat number:-");
    scanf("%d",&a);
    b=a%6;
    c=a/6;
    d=a%12;
    g=c%2;
    if(g<1)
    {
        e=1;
    }
    else if(g>1)
    {
        e=-1;
    }
    else if(g==1)
    {
        if(d=0)
        {
            e=-1;
        }e
        else
        {
            e=1;
        }
        
        
    }
    switch(b)
    {
    case 0:
    if(e=1)
    f=a+1;
    else if(e=-1)
    {
        f=a-11;
    }
    printf("%d ",f);
    printf("WS");
    break;
     case 1:
    if(e=1)
    f=a+11;
    else if(e=-1)
    {
        f=a-1;
    }
    printf("%d ",f);
    printf("WS");
    break;
    case 2: 
    if(e=1)
    f=a+9;
    else if(e=-1)
    {
        f=a-3;
    }
    printf("%d ",f);
    printf("MS");
    break;
    case 3: 
    if(e=1)
    f=a+7;
    else if(e=-1)
    {
        f=a-5;
    }
    printf("%d ",f);
    printf("AS");
    break;
    case 4:
    if(e=1)
    f=a+5;
    else if(e=-1)
    {
        f=a-7;
    }
    printf("%d ",f);
    printf("AS");
    break;
    case 5:
    
    if(e=1)
    f=a+3;
    else if(e=-1)
    {
        f=a-9;
    }
    printf("%d ",f);
    printf("MS");
    break;
    }
    

}