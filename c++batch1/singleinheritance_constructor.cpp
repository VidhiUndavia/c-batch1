/* program of single level inheritance with constructor */
#include<iostream>
using namespace std;
class multiply
{
	private:
	int p,r,n;
	public:
	multiply()	
	{
		p=r=n=0;
	}
	multiply(int a,int b,int c)
	{
		cout<<endl<<"Base class constructor";
		p=a;
		r=b;
		n=c;
	}
	int getanswer()
	{
		return (p*r*n);
	}
};
class simple_interest : public multiply
{
	private:
	float answer;
	public:
	/* when base class has parameterized constructor
	derived class must have constructor and it must call
	base class constructor in derived class constructor.
	constructor of base class appear after colon: and its name
	must be class name and it should contain argument-list 
	without data-type name */
	simple_interest(int a,int b,int c,float ans): multiply(a,b,c)
	{
		cout<<endl<<"derived class constructor";
		answer=ans;
	}
	void calculate_interest()
	{
		answer=getanswer()/100;
	}
	void show_interest()
	{
		cout<<endl<<"Simple interest is:- "<<answer;
	}
};
int main()
{
	int a,b,c;
	cout<<endl<<"Enter amount :- ";
	cin>>a;
	cout<<endl<<"Enter rate :- ";
	cin>>b;
	cout<<endl<<"Enter term :-";
	cin>>c;
	simple_interest objA(a,b,c,0);
	objA.calculate_interest();
	objA.show_interest();
	return 0;
}
	
