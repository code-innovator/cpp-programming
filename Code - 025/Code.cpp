//Single Inheritance
#include<iostream.h>
#include<conio.h>
class B  //Base class
{
private:
	      int a;  //Private member,not inheritable
public:
	      int b;  //public; ready for inheritance
	      void get_ab(void);
	      int get_a(void);
	      void show_a(void);
};
class D:public B  //Derived class(public derivation)
{
	      private:
	      int c;
	      public:
	      void mul(void);
	      void display(void);
};
//...Functions definition...
void B::get_ab(void)
{
	      a=5; b=10;
}
	      int B::get_a(void)
{
	      return (a);
}
	      void B::show_a(void)
{
	      cout<<"\n a= "<<a<<endl;
}
	      void D::mul(void)
{
	      c=b*get_a();
}
	      void D::display(void)
{
	      cout<<"\n a= "<<get_a();
	      cout<<"\n b= "<<b;
	      cout<<"\n c= "<<c;
}
	//...main program...
void main()
{
        clrscr();
        D d;
        d.get_ab();
        d.mul();
        d.display();
        getch();
}
