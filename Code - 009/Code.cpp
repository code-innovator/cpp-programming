//C++ Program to generate simple calculator 
#include<iostream.h> 
#include<conio.h> 
void main() 
{ 
float a,b,result; 
int ch; 
clrscr(); 
cout<<"Enter two numbers: "; 
cin>>a>>b; 
cout<<"\n1-addition \n2-subtraction \n3-multiplication \n4-division"; 
cout<<"\nEnter Your Choice: "; 
cin>>ch; 
switch(ch) 
{ 
case 1: 
   result=a+b; 
   cout<<"Sum is "<<result; 
   break; 
case 2: 
 if(a>b) 
   result=a-b; 
 else 
   result=b-a; 
   cout<<"Difference is "<<result; 
   break; 
case 3: 
   result=a*b; 
   cout<<"Product is "<<result; 
break; 
case 4: 
 if(a>b) 
   result=a/b; 
 else 
   result=b/a; 
   cout<<"Division is "<<result; 
   break; 
default: 
   cout<<"Invalid Choice"; 
   break; 
} 
getch(); 
}
