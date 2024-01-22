//C++ Program to find whether the number is armstrong or not
#include<iostream.h>
#include<conio.h>
void main()
{
int n,dn,temp,d;
clrscr();
cout<<"Enter a number: ";
cin>>n;
dn=n;
temp=0;
while(dn!=0)
{
   d=dn%10;
   temp=temp+(d*d*d);
   dn=dn/10;
}
if(n==temp)
{
cout<<n<<" is an armstrong no. ";
}
else
{
cout<<n<<" is not an armstrong no. ";
}
getch();
}
