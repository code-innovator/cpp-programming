//Program to sort a set of 10 floats in descending order
#include<iostream.h>
#include<conio.h>
void main()
{
int a[10];
int i,j,temp;
clrscr();
cout<<"\nEnter 10 elements: ";
for(i=1;i<=10;i++)
{
   cin>>a[i];
}
for(i=1;i<=(10-1);i++)
{
   for(j=1;j<=10-i;j++)
   {
      if(a[j]<a[j+1])
      {
        temp=a[j+1];
        a[j+1]=a[j];
        a[j]=temp;
      }
   }
}
cout<<"\nDescending order is \n";
for(i=1;i<=10;i++)
{
   cout<<a[i]<<endl;
}
getch();
}
