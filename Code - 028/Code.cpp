//Hierarchical Inheritance
#include<iostream.h>
#include<conio.h>
class student
{
protected:
      char name[30];
      int phy,che,roll;
public:
      void getdata(void);
      void display(void);
};
class maths:public student
{
protected:
      int math;
      float pcm;
public:
      void get_maths(void);
      void show_maths(void);
};
class biology:public student
{
protected:
      int bio:
      float pcb;
public:
      void get_bio(void);
      void show_bio(void);
};
      void student::getdata(void)
{
      cout<<"\n Enter name and roll number: ";
      cin>>name; cin>>roll;
      cout<<"\n Enter marks in physics: ";
      cin>>phy;
      cout<<"\n Enter marks in chemistry: ";
      cin>>che;
}
      void student::display(void)
{
      cout<<"\n Name: "<<name;
      cout<<"\n Roll No: "<<roll<<endl;
}
      void maths::get_maths(void)
{
      cout<<"\n Enter marks in maths: ";
      cin>>math;
      pcm=(phy+che+math)/3;
}
      void maths::show_maths(void)
{
      cout<<"\n Marks in physics: "<<phy;
      cout<<"\n Marks in chemistry: "<<che;
      cout<<"\n Marks in maths: "<<math;
      cout<<"\n PCM grouping: "<<pcm<<endl;
}
      void biology::get_bio(void)
{
      cout<<"\n Enter marks in biology: ";
      cin>>bio;
      pcb=(phy+che+bio)/3;
}
      void biology::show_bio(void)
{
      cout<<"\n Marks in physics: "<<phy;
      cout<<"\n Marks in chemistry: "<<che;
      cout<<"\n Marks in biology: "<<bio;
      cout<<"\n PCB grouping: "<<pcb;
}
void main()
{
maths M;
biology b;
M.getdata();
M.get_maths();
B.get_bio();
clrscr();
B.display();
M.show_maths();
B.show_bio();
getch();
}
