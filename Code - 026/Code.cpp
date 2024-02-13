//Multilevel Inheritance
#include<iostream.h>
#include<conio.h>
class student  //Base class
{
protected:
      int roll_number;
public:
      void get_number(int);
      void put_number(void);
};
class test:public student  //Intermediate
{                          //base class
protected:
      float sub1;
      float sub2;
public:
      void get_marks(float,float);
      void put_marks(void);
};
class result:public test  //Derived class
{
private:
      float total;
public:
      void display(void);
};
      //...functions definition...
      void student::get_number(int a)
{
      roll_number=a;
}
      void student::put_number(void)
{
      cout<<"\n Roll number: "<<roll_number<<"\n";
}
      void test::get_marks(float x,float y)
{
      sub1=x;
      sub2=y;
}
      void test::put_marks(void)
{
      cout<<"\n Marks in sub1= "<<sub1<<"\n";
      cout<<"\n Marks in sub2= "<<sub2<<"\n";
}
      void result::display(void)
{
      total=sub1+sub2;
      put_number();
      put_marks();
      cout<<"\n Total= "<<total<<"\n";
}
void main()
{
      clrscr();
      result student1;
      student1.get_number(127);
      student1.get_marks(98,99.2);
      student1.display();
      getch();
}
