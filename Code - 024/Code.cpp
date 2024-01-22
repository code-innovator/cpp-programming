/*C++ Program to overload binary + operator for addition of two complex numbers*/
#include<iostream.h>
#include<conio.h>
class complex {
private:
    float real;  //real part
    float imag;  //imaginary part
public:
    complex(float r, float i) : real(r), imag(i) {}
    void display() {
        cout << real << " + i" << imag;
    }
    complex operator+(complex c) {
	complex temp(0, 0);
	temp.real = real + c.real;
	temp.imag = imag + c.imag;
	return temp;
    }
};

void main()
{
    clrscr();
    complex C1(3.5, 2.5);
    complex C2(1.1, 1.7);
    complex C3 = C1 + C2;  // Operator function invoked
    cout << "\n C1= ";
    C1.display();
    cout << "\n C2= ";
    C2.display();
    cout << "\n C3= ";
    C3.display();
    cin.get();
    getch();
}
