/* multilevel inheritance */
#include<iostream>
using namespace std;
class feet
{
	private:
	float inch;
	public:
	feet()
	{		inch=0;		}
	feet(float i)
	{
		inch=i;
	}
	void showfeet()
	{
		cout<<endl<<"Feet is :- "<<inch/12;
	}
	float getfeet()
	{
		return inch/12.0;
	}
};
class meter : public feet
{
	private:
		float mat;
	protected:
		meter(float i): feet(i)
		{
			mat=getfeet()/3.54;
		}
		void showmeter()
		{
			cout<<endl<<"Meter is :-"<<mat;
		}
		float getmeter()
		{
			return mat;
		}
};
class kilometer : public meter
{
	private:
	float kilomat;
	public:
		kilometer(float i) :meter(i)
		{
			kilomat=getmeter()/1000;
		}
		void showkilometer()
		{
			showfeet();
			showmeter();
			cout<<endl<<"kilo meter is:- "<<kilomat;
		}
};
int main()
{
	float value;
	cout<<endl<<" Enter Inch ";
	cin>>value;
	kilometer km(value);
	/* we can also call member of parent classes like
	km.showfeet();
	km.showmeter(); // shows error that showmeter is not accessible */
	km.showkilometer();
	return 0;
}
