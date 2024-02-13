//Multiple Inheritance
#include<iostream.h>
#include<conio.h>
class M  //Parent Ist
{
protected:
      int m;
public:
      void get_m(int a)
      {
        m=a;
      }
};
class N  //Parent IInd
{
protected:
      int n;
public:
      void get_n(int b)
      {
        n=b;
      }
};
class P:public M, public N  //child
{
public:
      void display(void);
};
      void P::display(void)
{
      cout<<"\n m= "<<m;
      cout<<"\n n= "<<n;
      cout<<"\n m*n= "<<m*n;
}
void main()
{
      clrscr();
      P p;
      p.get_m(10);
      p.get_n(20);
      p.display();
      getch();
}
