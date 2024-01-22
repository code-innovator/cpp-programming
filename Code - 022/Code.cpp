//Program for overloading constructor
#include<iostream.h>
#include<conio.h>
class interest
{
        private:
        float amount,rate,total;
        public:
        interest() //Default constructor
        {          //1st constructor
        amount=2000.0;
        rate=10.0;
        }
        interest(float x,float y) //2nd constructor
        {                         //Parameterized constructor
        amount=x;
        rate=y;
        }
void process(void);
};
void interest::process(void)
{
       total=amount+((rate*amount)/100);
       cout<<"\n Total= "<<total;
}
void main()
{
      clrscr();
      interest I1,I2(500.0,5.0);
      cout<<"\n Default constructor: \n";
      I1.process();
      cout<<"\n Parameterized constructor: \n";
      I2.process();
      getch();
}
