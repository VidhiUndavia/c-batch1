#include<iostream>
using namespace std;
class square
{
	public:
	int getsquare(int number)
	{
		int answer=number*number;
		return answer;
	}
};
class qube : public square
{
	public:
	int getqube(int number)
	{
		int answer;
		answer=getsquare(number)*number;
		return answer;
	}
};
int main()
{
	//square a1;
	qube q1;
	int number;
	
	/* cout<<"enter value to find its square";
	cin>>number;
	cout<<endl<<"square is ;- "<<a1.getsqaure(number); */
	cout<<endl<<"enter number to find out qube";
	cin>>number;
	cout<<endl<<"qube is:- "<<q1.getqube(number);
	return 0;
}
	
