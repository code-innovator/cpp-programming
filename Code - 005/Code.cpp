/*C++ Program to find whether the given integer is palindrome or not*/
#include<iostream.h>
#include<conio.h>
void main()
{
int n,dn,temp=0,d;
clrscr();
cout<<"Enter a number: ";
cin>>n;
dn=n;
while(dn!=0)
{
      d=dn%10;
      temp=(temp*10)+d;
      dn=dn/10;
}
if(n==temp)
{
cout<<"The number "<<n<<" is palindrome";
}
else
{
cout<<"The number "<<n<<" is not a palindrome";
}
getch();
}
