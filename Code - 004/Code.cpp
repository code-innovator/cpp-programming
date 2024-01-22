//Program to find factorial of a number
#include<iostream.h>
#include<conio.h>
void main()
{
 int fact,number;
 clrscr();
 fact=1;
 cout<<"Enter the number: "<<endl;
 cin>>number;
 for(int i=1;i<=number;i++)
 {
 fact=fact*i;
 }
 cout<<"The factorial of a inputted number is "<<fact;
 getch();
}
