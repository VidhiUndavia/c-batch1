/*-------- CONCEPT OF FRIEND FUNCTION --------------------*/
// FRIEND function is special type of function which is not member of any class and still access any private data member of class.
// to declare any function to friend to we just need to add KEYWORD "friend" before function
// declaration.
/* the function is defined elsewhere in the program generally above void main as any other normal c++ function.
it is not in the scope of class to which it has been declared as friend.
it can not call using dot operator along with class name.
it can be called directly like any other normal function.
but inorder to access private data member one should use object name along with dot operator.
it can be declared either as public or private function.
it should one or more have object as a argument. */
#include<iostream>		//include header file
using namespace std;
class item
{
	private: /* scope of data variable is private for class person */
	 /* data member of class */

	int number; /* integer variable */
	int quantity; /* integer variable */
	float price; /* float variable */

	public: /* scope of  function is public type so that it can be access by main progam */

	/* declaration of member function */

	void getdata(); /* function is used to accept the data */
	void display(); /* function is used to display the data  */
	friend void fsum (item t) ; /* make sum of data members of different object */
};
//------------------------- member function defination ---------------------
/* defination of getdata function */
void item::getdata()
{
	cout<<endl<<"input number ";
	cin>>number;
	cout<<endl<<"Enter quantity for item:";
	cin>>quantity;
	cout<<endl<<"Enter price per item:";
	cin>>price;
}
// defination of display function */
void item::display()
{
	cout<<endl<<"** ** ** ** ** ** ** ** ** ** ** ** ** ** ** **";
	cout<<endl<<endl<<" item number  is : "<<number<<endl;
	cout<<" quantity is  :"<<quantity<<endl;
	cout<<"  price is :"<<price;

}
// defination of sum function which is friend function */
 void fsum (item t)
{
	float ans;
	ans=t.quantity*t.price;
	cout<<endl<<"** ** ** ** ** ** ** ** ** ** ** ** ** ** ** **";
	cout<<endl<<" showing value through friend function ";
	cout<<endl<<"** ** ** ** ** ** ** ** ** ** ** ** ** ** ** **";
	cout<<endl<<"value of price*quantity "<<ans;
}
int main()
{
	item p1; /* creating object of abstract data type of type class item*/
	
	p1.getdata(); /* calling member function to accept value of object*/
	p1.display(); /* calling member function to display value of object */
	//cout<<p1.quantity;
	fsum(p1); /* calling friend function */
	return 0;
}
