
/* example of hybrid inheritance */
#include<iostream>
#include<string.h>
using namespace std;
class customer
{
	private:
	char name[50];
	char surname[50];
	char middlename[50];
	public:
	customer(char n[],char s[],char m[])
	{
		strcpy(name,n);
		strcpy(surname,s);
		strcpy(middlename,m);
	}
	void show()
	{
		cout<<endl<<"name is :- "<<name;
		cout<<endl<<"surname is :- "<<surname;
		cout<<endl<<"fathername(middle) is :- "<<middlename;
	}
};
class purchase
{
	protected:
		int item1,item2,item3;
		int total;
	protected:
		purchase(int i1,int i2,int i3)
		{
			item1=i1;
			item2=i2;
			item3=i3;
			total=item1+item2+item3;
		}
		void show()
		{
			cout<<endl<<"first item_amount is :-"<<item1;
			cout<<endl<<"second item_amount is :-"<<item2;
			cout<<endl<<"third item_amount is :-"<<item3;
			cout<<endl<<"total is :-"<<total;
		}
};
/* multiple inheritance */
class tax : public customer,public purchase
{
	protected:
	float tax_amount;
	public:
	// report constructor has two pass value to its two parent class
	tax(int i1,int i2,int i3,char n[],char s[],char m[])
	:customer(n,s,m), purchase(i1,i2,i3)
	{
		tax_amount=total*0.15;
	}
	void showtax()
	{
		cout<<endl<<"tax is:- "<<tax_amount;
	}
};
/* hybrid inheritance*/
class print_bill : public tax
{
	protected:
	float netbill;
	public:
	print_bill(int i1,int i2,int i3,char n[],char s[],char m[])
	:tax(i1,i2,i3,n,s,m)
	{
		netbill=total+tax_amount;
	}
	void showall()
	{
		customer::show();
		purchase::show();
		showtax();
		cout<<endl<<"net bill is "<<netbill;
	}
};
int main()
{
	
	int i1,i2,i3;
	cout<<endl<<"enter first item amount";
	cin>>i1;
	print_bill s1(i1,55,88,"jay","patel","harshad");
	s1.showall();
	return 0;
}
