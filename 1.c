#include <iostream.h>
#include <conio.h>

int main()
{
clrscr();
int a, b, c;
cout<<"ENTER THE VALUE FOR a: ";
cin>>a;
cout<<"ENTER THE VALUE FOR b: ";
cin>>b;
c=a;
a=b;
b=c;
cout<<”AFTER SWAPPING…”<<endl;
cout<<"THE VALUE OF a : "<<a<<endl<<" THE VALUE OF b : "<<b<<endl;
getch();
return 0;
}
