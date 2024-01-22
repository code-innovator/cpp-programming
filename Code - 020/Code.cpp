//Program to generate fibonacci series
#include<iostream.h>
#include<conio.h>
class fibonacci
{
	private:
	long int f0,f1,fib;
	public:
	fibonacci (void);
	void process (void);
	void display (void);
};
fibonacci::fibonacci(void)
{
      f0=0;
      f1=1;
}
void fibonacci::process(void)
{
      fib=f0+f1;
      f0=f1;
      f1=fib;
}
void fibonacci::display(void)
{
      cout<<fib<<"\n";
}
void main()
{
      clrscr();
      int i,n;
      fibonacci F;
      cout<<"\n Enter number of elements: "<<endl;
      cin>>n;
      cout<<"\n";
      for(i=1;i<=n;i++)
{
      F.process();
      F.display();
}
      getch();
}
