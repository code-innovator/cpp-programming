//Program to fin GCD value
#include<iostream.h>
#include<conio.h>
class gcd
{
int a,b;
public:
      void find();
};
void gcd::find(void)
{
      cout<<"\n Enter the value of a \n";
      cin>>a;
      cout<<"\n Enter the value of b \n";
      cin>>b;
      while(a!=b)
      {
      if(a>b)
            a=a-b;
      if(b>a)
            b=b-a;
      }
            cout<<"\n The gcd is "<<a;
}
void main()
{
      clrscr();
      gcd obj1;
      obj1.find();
      getch();
}

