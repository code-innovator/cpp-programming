//Program to find largest number
#include<iostream.h>
#include<conio.h>
void main()
{
int a,b,c,max;
clrscr();
cout<<"\n Enter three numbers: "<<endl;
cin>>a>>b>>c;
if(b>c)
      {max=b;}
else
      {max=c;}
if(a>max)
      {max=a;}
cout<<"\n The larger number is ";
cout<<max;
getch();
}
