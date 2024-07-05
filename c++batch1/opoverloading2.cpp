/* program of unary operator overloading that return value*/
#include<iostream>
using namespace std;

class item
{
	private:
		int x[5];
	public:
		item();
		item(int);
		void display();
		item operator -(); /*overloading unary of - minus operator that return item type value*/
		item operator +();/* overloading unary of + plus operator that return item type value*/
};
 item::item()
{
	for(int i=0;i<5;i++)
	{
		cout<<endl<<"enter value for "<<i+1<< " element";
		cin>>x[i];
	}
} 
item::item(int a)
{
	// no code
}
void item::display()
{
	for(int i=0;i<5;i++)
	{
		cout<<endl<<"value at "<<i+1<< " element "<<x[i];
	}
}
/* definition of unary operator "-" function */
item item::operator -()
{
	item temp(1); // parameterized constructor
	for(int i=0;i<5;i++)
	{
	     temp.x[i]=x[i]-2;
	}
	return temp;
}
/*definition of unary operator "+" function */
item item::operator +()
{
	item temp(1); // parameterized constructor
	for(int i=0;i<5;i++)
	{
	     temp.x[i]=x[i]+2;
	}
	return temp;
}
int main()
{
	
	item s;
	cout<<"Object S..."<<endl;
	s.display();
	s=-s;   /* operator minus in overloaded*/
	cout<<endl<<"Object S after minus operator overloading"<<endl;
	s.display();
	
	
	item s2;
	cout<<"Object S2..."<<endl;
	s2.display();
	s2=+s2;   /* operator plus in overloaded*/
	cout<<endl<<"Object S2 after plus operator overloading"<<endl;
	s2.display();
	return 0;
}



