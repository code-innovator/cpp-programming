//Program to calculate addition of first n numbers
#include<iostream.h>
#include<conio.h>
int add(int);
void main()
{
int n,sum;
clrscr();
cout<<"Enter a number: \n";
cin>>n;
sum=add(n);
cout<<"Addition of first "<<n<<" number is "<<sum;
}
//function to calculate addition
int add(int x)
{
int S=0;
if(x!=0)
{
S=x+add(x-1);
}
return(S);
getch();
}
