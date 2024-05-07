/* nesting of member of function 
with concept of array as data member of class */
#include<iostream>
using namespace std;

class product
{
	private: /* scope of data variable is private for class product */
  /* data member of class */
	int icode[100]; 
	int iprice[100];
	int count; /* used to count item record */
	public: 
	inline void CNT()
	{
		count=0;
	} /* set count to zero */
	void display ();
	void getdata()
	{
		
		cout<<endl<<"enter item code for "<<count+1<<"item";
		cin>>icode[count];
		cout<<endl<<"input price for the same :";
		cin>>iprice[count];
		count++; /* increment count by one */
	}
	void remove (void); //used to remove particular item
	void displaysum(); // used to display sum of all item
};
void product :: display()
	/* function is used to display the data  */
{
		
		cout<<"\n code   price   : "<<endl;
		for (int i=0;i<count;i++)
		{
			if(icode[i]!=-99) // i=2
			{
				cout<<"\n "<<icode[i];
				cout<<"      "<<iprice[i]<<endl;
			}
		}
		cout<<endl;
		/* member function calling another member function */
}
void product :: remove ()
{
	int number;
	cout<<endl<<"enter item number to delete that item";
	cin>>number; //20
	for (int i=0;i<count;i++)
	{
		if (icode[i]==number) // i=1 icode[1]=20
		{
		iprice[i]=0;
		icode[i]=-99;
		break;
		}
	}
}// end of function delete/remove
void product :: displaysum ()
{
	float sum=0; /* used to make sum */
	for (int i=0;i<count;i++) // i=3 icode[2]=30
	{
		if(icode[i]!=-99)
		{
			sum=sum+iprice[i]; // sum=400
		}
	}
	
	cout<<endl<<"total amount is "<<sum;
}
int main()
{
	product p1;
	
	p1.CNT();
	int number;
	// use choice from user
	do
	{
		cout<<endl<<"Enter your choice by entering number";
		cout<<endl<<" 1 : add item";
		cout<<endl<<" 2 : display total sum";
		cout<<endl<<" 3 : delete an item";
		cout<<endl<<" 4 : display all items";
		cout<<endl<<" 5 : quit";
		cout<<endl<<"********** enter your choice *********** :-";
		cin>>number;
		switch(number)
		{
			case 1 : 
			p1.getdata(); 
			break;
			case 2 : 
			p1.displaysum(); 
			break;
			case 3 : 
			p1.remove(); 
			break;
			case 4 : 
			p1.display(); 
			break;
			case 5 : break;
			default : cout<<"\n error in input \n";
		}
	} while (number!=5);
	cout<<endl<<"***************"<<endl;
	return 0;
}
