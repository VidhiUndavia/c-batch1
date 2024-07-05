/* concept of virtual function */
/* Rules for vitual function*/
/* virtual function must be not static member function of class
they should be accessed using pointer of class.
it can friend function of another type of class.
a vitual function in base class must be defined.
a prototype of virtual function must be identical.
we can not have virtual constructor but we can have virtual destructor*/

#include<iostream>
using namespace std;
class square // base class
{
	public:
	int no;
	void getno() // normal function of class
	{
		cout<<endl<<"Enter number to get is square";
		cin>>no;
	}
	virtual void show()
	{
		cout<<endl<<" Answer is = "<<no;
	}
	int cal(int t=0) // default argument
	{
		cout<<" making calculation";
	if (t==0)
		{
			no=no*no;
			return (no);
		}
	else
		{	t=t*t;
			return (t);
		}
	}
};
class cube : public square
{
	public:
	int num;
	void getnum()
	{
		cout<<endl<<"Enter number to get its qube :- ";
		cin>>num;
	}
	void show()
	{
		cout<<endl<<" Answer is "<<num;
	}
	void calculate()
	{
		num=num*cal(num);
	}
};
int main()
{
	square s;
	cube q;
	square *sptr=&s;
	cout<<endl<<" pointer point to base class";
	sptr->getno();
	sptr->cal();
	sptr->show(); /* call base class show function */
	cout<<endl<<" pointer point to derived class";
	sptr=&q;
	((cube *)sptr)->getnum();
	
	((cube *)sptr)->calculate();
	sptr->show(); /* call child class show function */
	return 0;
}
