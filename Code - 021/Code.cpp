//Program to calculate electricity bill
#include<iostream.h>
#include<conio.h>
class electricity
{
    private:
    int mn,pu,cu,n;
    float bill;
    public:
    electricity() //constructor
    {
       bill=0;
    }
    void Getdata(void);
    int Process(void);
    void Calculate(void);
    void Display(void);
    ~electricity() {} //destructor
};
void electricity::Getdata(void)
{
cout<<"\n Enter meter no: ";
cin>>mn;
cout<<"\n Enter previous units: ";
cin>>pu;
cout<<"\n Enter current units: ";
cin>>cu;
}
int electricity::Process(void)
{
    if(cu>pu)
    {
	  n=cu-pu;
	  return(1);
    }
    else
	  return(0);
}
void electricity::Calculate(void)
{
    int dn;
    dn=n;
    if(dn<=50)
    {
    bill=bill+(dn*2);
    }
    else
    {
	  bill=bill+(50*2);
	  if(dn<=200)
	  {
	  dn=dn-50;
	  bill=bill+(dn*3.5);
    }
    else
    {
	  bill=bill+(150*3.5);
	  if(dn<=500)
	  {
	  dn=dn-200;
	  bill=bill+(dn*4.5);
	  }
	  else
	  {
	  bill=bill+(300*4.5);
	  dn=dn-500;
	  bill=bill+(dn*5);
	  }
    }
}
}
void electricity::Display(void)
{
   cout<<"\n Meter no: "<<mn;
   cout<<"\n Previous unit "<<pu;
   cout<<"\n Current units "<<cu;
   cout<<"\n No. of units consumed: "<<n;
   cout<<"\n Bill: "<<bill;
}
void main()
{
   clrscr();
   electricity E;
   int a;
abc:clrscr();
   E.Getdata();
   a=E.Process();
   if(a==0)
   {
   cout<<"\n Wrong data Reenter it ";
   goto abc;
}
else
{
   E.Calculate();
   E.Display();
}
   getch();
}
