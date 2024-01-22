/*C++ Program to calculate and print factorial of first 10 numbers*/
#include<iostream.h>
#include<conio.h>
void main()
{
int fact,n,i;
clrscr();
cout<<"Number"<<"\t"<<"Factorial";
for(n=1;n<=10;n++)
{
      fact=1;
      for(i=1;i<=n;i++)
      {
      fact=fact*i;
      }
cout<<endl<<n<<"\t"<<fact;
}
getch();
}
