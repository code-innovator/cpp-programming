//C++ Program to print the given pattern
#include<iostream.h>
#include<conio.h>
void main()
{
int i,j,n;
clrscr();
cout<<"Enter a number: ";
cin>>n;
cout<<endl;
for(i=1;i<=n;i++)
{
   for(j=1;j<=i;j++)
   {
      cout<<i<<"\t";
   }
   cout<<endl;
}
getch();
}
