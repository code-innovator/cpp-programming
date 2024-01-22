//Negate all data items of class with - operator
#include<iostream.h>
#includes<conio.h>
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
                void main()
                {
                clrscr();
                int l,m,n;
                space S;
                cout<<"\n Enter three numbers: \n";
                cin>>l>>m>>n;
                S=space(l,m,n);
                cout<<"S:";
                S.display();
                - S;
                cout<<"-S:";
                S.display();
                getch();
                }
