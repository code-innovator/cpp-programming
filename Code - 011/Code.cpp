/*C++ Program to calculate volume of cube, cylinder and rectangular box using function*/
#include<iostream.h>
#include<conio.h>
int volume (int s);
float volume (float r,float h);
int volume (int l,int b,int h);
void main()
{
int ch;
do
{
  clrscr();
  cout<<"\n1:Volume of cube";
  cout<<"\n2:Volume of cylinder";
  cout<<"\n3:Volume of rectangular box";
  cout<<"\n4:Quit";
  cout<<"\n\n Enter Your Choice: ";
  cin>>ch;
switch (ch)
{
case 1:
   cout<<"Volume of cube is ";
   cout<<volume (5);
   break;
case 2:
   cout<<"Volume of cylinder is ";
   cout<<volume (7.0, 2.0);
   break;
case 3:
   cout<<"Volume of rectangular box is ";
   cout<<volume (3,5,7);
   break;
case 4: break;
default:
   cout<<"Invalid Choice";
   cout<<"Reenter your choice";
}
}
   while(ch!=4);
}
   //function to calculate volume of cube
   int volume(int s)
{
   return(s*s*s);
}
   //function to calculate volume of cylinder
   float volume(float r,float h)
{
   return (3.14*r*r*h);
}
   //function to calculate volume of rectangular
   int volume(int l,int b,int h)
{
   return(l*b*h);
   getch();
}
