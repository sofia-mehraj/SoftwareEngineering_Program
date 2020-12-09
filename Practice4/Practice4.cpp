#include <iostream>
using namespace std;

class Rectangle
{

	public:
		double length, breadth;
		double Area()
		{
			return length * breadth;
		}

};

class Constructor
{
	public:
		int num1,num2;
		Constructor(int sum1,int sum2)
		{
			num1 = sum1;
			num2 = sum2;
		}
		
		int sumof()
		{
			return num1+num2;
		}
};

class ComplexNumber
{
	public:
		double real,imagin;
		ComplexNumber(double x, double y)
		{
			real = x;
			imagin = y;
		}
};

int main () 
{
	//ex1
	cout<<endl<<"AREA OF RECTANGLE"<<endl;
	Rectangle Rect;
	cout<<"Enter length of rectangle: ";
	cin>>Rect.length;
	cout<<"Enter breadth of rectangle: ";
	cin>>Rect.breadth;
	cout<<endl<<"Area of Rectangle: "<<Rect.Area()<<endl;
 
	//ex2
	int var1;
	int var2;
	cout<<endl<<"CONSTRUCTOR OF CLASS"<<endl;
	cout<<"Enter 1st Integer: ";
	cin>>var1;
	cout<<"Enter 2nd Integer: ";
	cin>>var2;

	Constructor con(var1,var2);
	cout <<endl<<"Sum of Two Integer is: "<< con.sumof()<<endl;
	
	//ex3
	double num1,num2;
	cout<<endl<<"COMPLEX NUMBER"<<endl;
	cout <<endl<<"***First Variable***"<<endl;
	cout<<"Enter the Real Part: ";
	cin>> num1;
	cout<<"Enter the Imaginary Part: ";
	cin>> num2;
	ComplexNumber variable1(num1,num2);
	cout<<endl<<"***Second Variable***"<<endl;
	double num3,num4;
	cout<<"Enter the Real Part: ";
	cin>> num3;
	cout<<"Enter the Imaginary Part: ";
	cin>> num4;
	
	ComplexNumber variable2(num3,num4);

	double Real;
	Real = variable1.real + variable2.real;

	double Imaginary;
	Imaginary = variable2.imagin + variable1.imagin;

	cout <<"\nSum of Real Parts is: "<< Real <<endl;
	cout <<"\nSum of Imaginary Parts is: "<<Imaginary<<endl;

	return 0;
}
