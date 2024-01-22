//Program to sort array (use call by reference)
#include<iostream.h>
#include<conio.h>
void sort(int*, int*);
void main()
{
int a[10],i,j;
clrscr();
cout<<"\n Enter ten numbers \n";
for(i=0;i<=9;i++)
   {
       cin>>a[i];
   }
cout<<"\n After Sort \n";
for(i=1;i<=9;i++)
{
       for(j=0;j<=(9-i);j++)
       {
       sort(&a[j], &a[j+1]); //call by passing address of variable
       }
}
for(i=0;i<=9;i++) //print sorted array
{
       cout<<a[i]<<"\n";
}
}
//function to sort array
void sort(int *x, int *y) //function definitiom
{
       int temp;
       if(*x<*y)
       {
       temp=*x; //assign the value at address x to temp
       *x=*y; //put the value at y into x
       *y=temp; //put the value at temp into y.
       }
}
