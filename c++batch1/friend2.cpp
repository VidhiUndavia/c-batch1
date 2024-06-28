 /*----------- CONCEPT OF FRIEND FUNCTION --------------*/
#include<iostream>
using namespace std;
class emp;
class item
{
	private:
	int number;
	int quantity;
	float price;
	public:
	void getdata();
	void display();
	friend void fsum (item ,emp);
};
void item::getdata()
{
	cout<<endl<<"input number ";
	cin>>number;
	cout<<endl<<"Enter quantity for item:";
	cin>>quantity;
	cout<<endl<<"Enter price per item:";
	cin>>price;
}
void item::display()
{
	cout<<endl<<"** ** ** ** ** ** ** ** ** ** ** ** ** ** ** **";
	cout<<endl<<endl<<" item number  is : "<<number<<endl;
	cout<<" quantity is  :"<<quantity<<endl;
	cout<<"  price is :"<<price;

}
class emp
{
	private:
	int empno;
	int basic;
	float total;
	public:
	void getdata();
	void display();
	friend void fsum (item,emp);
};
void emp::getdata()
{
	cout<<endl<<"input employee number ";
	cin>>empno;
	cout<<endl<<"Enter basic for employee:";
	cin>>basic;
}
void emp ::display()
{
	cout<<endl<<"** ** ** ** ** ** ** ** ** ** ** ** ** ** ** **";
	cout<<endl<<endl<<" employee number  is : "<<empno<<endl;
	cout<<" basic is  :"<<basic<<endl;
}
void fsum (item a1,emp e1)
{
	float ans;
	cout<<endl<<"** ** ** ** ** ** ** ** ** ** ** ** ** ** ** **";
	cout<<endl<<" showing value through friend function ";
	cout<<endl<<"** ** ** ** ** ** ** ** ** ** ** ** ** ** ** **";
	ans=e1.basic+((a1.quantity*a1.price)* 0.10);
	cout<<endl<<"total salary is := "<<ans;
}
int main()
{
	item p1;
	emp p2;
	
	p1.getdata();
	p1.display();
	p2.getdata();
	p2.display();
	fsum(p1,p2);
	return 0;
}
