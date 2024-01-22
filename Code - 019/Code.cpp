//Swapping private data of classes using friend function
#include<iostream.h>
#include<conio.h>
class A; //forward declaration
class B
{
     private:
     int val2;
     public:
         void getdata(void)
         {
         val2=21;
     }
     void display(void)
         {
         cout<<"\n Value 2: "<<val2;
         }
     friend void exchange(B&, A&);
     };
class A
{
     private:
     int val1;
     public:
     void get(void)
     {
     val1=12;
     }
     void disp(void)
         {
         cout<<"\n Value 1: "<<val1;
         }
         friend void exchange(B&, A&);
     };
     void exchange(B &x, A &y)
         {
                int temp;
                temp=x.val2;
                x.val2=y.val1;
                y.val1=temp;
         }
void main()
{
   clrscr();
   A abc;
   B pqr;
   abc.get();
   pqr.getdata();
   cout<<"\n Before exchange: ";
   abc.disp();
   pqr.display();
   exchange(pqr,abc); //Swapping
   cout<<"\n After exchange: ";
   abc.disp();
   pqr.display();
   getch();
}
