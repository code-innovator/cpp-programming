//Power() function in C++
#include<iostream.h>
#include<conio.h>
double power(double, int); //function prototype
void main()
{
      clrscr();
      double X;
      int n;
      cout<<"\n Enter the value of X \n";
      cin>>X;
      cout<<"\n Enter the value of n \n";
      cin>>n;
      cout<<"\n The result is "<<power(X,n);
}
double power(double x, int n)
{
      if(x==0)
	        return 0;
      if(n==0)
	        return 1;
      double y=1;
      for(int i=0;i<n;i++)
	          y=y*x;
      for(int j=0;j>n;j--)
	          y=y/x;
      return y;
}
