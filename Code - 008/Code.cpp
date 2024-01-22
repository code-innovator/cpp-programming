//C++ Program to print the given pattern
#include<iostream.h>
#include<conio.h>
void main()
{
clrscr() ;
int i,j;
       for(i=5;i>=1;i--)
       {
          for(j=1;j<=i;j++)          
          {
             cout<<j%2<<"\t";
          }
          cout<<endl;
       }
getch();
}
