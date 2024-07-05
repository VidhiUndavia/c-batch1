/* example of unary operator overloading */
#include<iostream>
using namespace std;
class space
{
	private:
		int x;
		float y;
	public:
		void getdata(int ,float);
		void display();
		void operator -(); /* declaration of operator overloading */
		/* void state that operator function returning nothing
			in this function */
		~ space() {cout<<endl<<"bye";}
};
void space::getdata(int a,float b)
{
	x=a;
	y=b;
}
void space::display()
{
	cout<<endl<<"^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^"<<endl;
	cout<<"The value of X="<<x<<endl;
	cout<<"The value of Y="<<y<<endl;
}
void space::operator -()          /* definition of function */
{
	x=x-2;
	y=y-2;
}
int main()
{
	
	int  intdata,floatdata;
	cout<<endl<<"Enter integer data :- ";
	cin>>intdata;
	cout<<endl<<"Enter integer 2 data :- ";
	cin>>floatdata;
	space s;
	s.getdata(intdata,floatdata);
	cout<<"Object display"<<endl;
	s.display();
	-s; 			  /* using first method */
	cout<<"object S overloaded by unary operator.. using first method"<<endl;
	s.display();
	cout<<"Object S overloaded by unary operator second method...using second method"<<endl;
	s.operator  -();            /* using second method */
	s.display();
	return 0;
}
