/* example of multiple inheritance */
#include<iostream>
#include<string.h>
using namespace std;
class stud_detail
{
	private:
	char name[25];
	char surname[25];
	char middlename[25];
	public:
	stud_detail(char n[],char s[],char m[])
	{
		strcpy(name,n);
		strcpy(surname,s);
		strcpy(middlename,m);
	}
	void show()
	{
		cout<<endl<<"name is :- "<<name;
		cout<<endl<<"surname is :- "<<surname;
		cout<<endl<<"fathername is :- "<<middlename;
	}
};
class marks
{
	protected:
		int sub1,sub2,sub3;
		int total;
	protected:
		marks(int s1,int s2,int s3)
		{
			sub1=s1;
			sub2=s2;
			sub3=s3;
			total=s1+s2+s3;
		}
		void show()
		{
			cout<<endl<<"first subject marks is :-"<<sub1;
			cout<<endl<<"second subject marks is :-"<<sub2;
			cout<<endl<<"third subject marks is :-"<<sub3;
			cout<<endl<<"total is :-"<<total;
		}
};
// report class inherit two class stud_detail and marks
class report : public stud_detail,public marks
{
	private:
	float average;
	public:
	// report constructor has two pass value to its two parent class
	report(int s1,int s2,int s3,char n[],char s[],char m[]):stud_detail(n,s,m),marks(s1,s2,s3)
	{
		average=total/3;
	}
	void show()
	{
		stud_detail::show();
		marks::show();
		cout<<endl<<"average is:- "<<average;
	}
};
int main()
{
	
	report stud1(57,55,88,"ronit","patel","Kamleshbhai");
	stud1.show();
	return 0;
}
