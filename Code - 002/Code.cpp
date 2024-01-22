/* Program to display a fibonacci series of 15 terms */
#include<iostream.h>
#include<conio.h>
void main()
{
int f0,f1,f,n;
f0=0;
f1=1;
clrscr();
cout<<"Fibonacci series \n";
cout<<"\n"<<f0<<"\n"<<f1;
for(n=1;n<=13;n++)
{
      f=f0+f1;
      cout<<"\n"<<f;
      f0=f1;
      f1=f;
}
getch();
}
