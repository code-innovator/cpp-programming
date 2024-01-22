//Negate all data items of class with - operator
#include<iostream>
#include<stdlib.h>
using namespace std;
class space
{
	private:
	int x,y,z;
	public:
		space(int a,int b,int c)
		{
		x=a;
		y=b;
		z=c;
		}
		void display(void);
		void operator-(); //overloaded unary-
		};
		void space::display()
		{
		cout<<x<<"\t"<<y<<"\t"<<z;
		}
		void space::operator-(void)
		{
		x=-x;
		y=-y;
		z=-z;
		}
		int main()
		{
		system("clear");
		int l,m,n;
		space S(l,m,n);
		cout<<"\n Enter three numbers: \n";
		cin>>l>>m>>n;
		cout<<"\n S:";
		S.display();
		-S;
		cout<<"\n-S:";
		S.display();
		getchar();
		}
