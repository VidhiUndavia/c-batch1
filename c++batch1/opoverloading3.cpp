// Binary oeprator (-) overloading (without friend function)

#include<iostream>
using namespace std;
class space
{
	private :
		int x;
		int y;
	public :
		void getdata(int,int);
		void display();
		// unary operator returning space type value
		space operator --();
		space operator *();
};
void space::getdata(int a,int b)
{
	x=a;
	y=b;
}
void space::display()
{
	cout<<endl<<"** ** ** ** ** ** ** ** ** ** ** **";
	cout<<endl<<"The value of x= "<<x<<endl;
	cout<<"The vlaue of y= "<<y<<endl;
}
space space::operator --()
{
	space temp;
	temp.x=x--;  /* postfix means first assignment and then decrement */
	temp.y=y--;  /* postfix means first assignment and then decrement */
	return (temp);
}
space space::operator *()
{
	space temp;
	temp.x=x*x;
	temp.y=y*y;
	return (temp);
}
int main()
{
	
	space s,s1,ans;
	s.getdata(10,100);
	cout<<"Object s display original value";
	s.display();
	s1=--s;
	cout<<endl<<"** ** *** ** *** ** *** ** *** ** "<<endl;
	cout<<"Object s1 overlaoding by unary operator --"<<endl;
	cout<<endl<<"value in object s";
	s.display();
	cout<<"** ** *** ** *** ** *** ** *** ** "<<endl;
	cout<<endl<<"value in object s1";
	s1.display();
	cout<<"** ** *** ** *** ** *** ** *** ** "<<endl;
	ans=*s1; /* return square of given object */
	ans.display();
	return 0;
}
