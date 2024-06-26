/* example of multiple inheritance */

#include<iostream>
using namespace std;

class detail // defination of first base class
{
	private:
		char	name[100];  
		int		age;
		float	weight;
	public:
		void getdetail()
		{
			cout<<"\n enter name :- "; 	cin>>name;
			cout<<"\n enter age :- ";       cin>>age;
			cout<<"\n enter weight :- ";    cin>>weight;
		}
		void showdetail()
		{
			cout<<"\n name : "<<name;
			cout<<"\n age : "<<age;
			cout<<"\n weight : "<<weight;
		}
};
class mark // defination of second base class
{
	private:
		int sub1, sub2;
	public:
		void getmark(void)
		{
			cout<<endl<<"enter marks for 1st subject : ";	cin>>sub1;
			cout<<endl<<"enter marks for 2nd subject : ";	cin>>sub2;
		}
		void putmark(void)
		{
			cout<<endl<<" marks for 1st subject : "<<sub1;
			cout<<endl<<" marks for 2nd subject : "<<sub2;
		}
};
/* defination of class report */
class report : public detail, public mark
{
	public:
		void show()
		{
			
			cout<<endl<<"Report";
			showdetail(); /* member function of first base class */
			putmark();   /* member function of second base class */
		}
};
int main()
{
	report r1;
	
	r1.getdetail(); /* member function of first base class    */
	r1.getmark();   /* member function of second base class */
	r1.show();     /* member function of report class */
	return 0;
}
