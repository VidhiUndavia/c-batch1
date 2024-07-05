/* conversion of class type variable(object) to basic type variable
   (c to b)*/
/* Operator overloading is necessary
   to convert class type to basic (int type) */
/* - Generalize form of this conversation is known as - class type to basic type
  - It must be class member
  - It must not specify return type, but return statement is there.
  - It must not have any argument.
  - Many to one cast converstion	*/

#include<iostream>
class time
{
	private :
		int hrs;
		int mins;
	public :
		time(int,int);
		operator int(); // type conversion function 
};
time::time(int a,int b)
{
	hrs=a;
	mins=b;
}
time::operator int()		// return type is not there
{
	return(hrs*60+mins);
}
int main()
{
	
	int h,m,tot_min1;
	std::cout<<"Enter the value of Hrs : ";
	std::cin>>h;
	std::cout<<"Enter the value of Mins : ";
	std::cin>>m;
	time t1(h,m);
	std::cout<<"Object T1 overloaded assignment operator.."<<std::endl;
	tot_min1=t1; // conversion from class to basic 
	std::cout<<"total Minutes : "<<tot_min1<<std::endl;
	std::cout<<"Object T1 overloaded assignment operator...Second Method"<<std::endl;
	int tot_min2=t1.operator int();
	std::cout<<"Total Minutes : "<<tot_min2<<std::endl;
	return 0;
 }
