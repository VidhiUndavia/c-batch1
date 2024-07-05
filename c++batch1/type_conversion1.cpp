/* basic to class conversion*/
/* means basic data type variable into class type variable */
/* using this method we can convert (int,float,char,long,double)
   type variable to any class type variable(object) 
   to perform basic to class type conversion we need constructor function in class. */

# include<iostream>
class mytime
{
	int hour;
	float minute;
	public:
	mytime()
	{
	hour=0;
	minute=0;
	}
	mytime(int a, int b) // integer parameterized constructor
	{
		hour=a;
		minute=b;
	}
	mytime(float f) //10.25
	{
		hour=int(f); // 10
		minute=(f-hour)*100; //25
	}
	void show()
	{
	std::cout<<std::endl<<"";
	std::cout<<std::endl<<" hour is :- "<<hour;
	std::cout<<std::endl<<" minute is :- "<<minute;
	std::cout<<std::endl<<"";
	}
};
int main()
{
	float f;
	std::cout<<std::endl<<"";
	std::cout<<std::endl<<" enter time (hour and minute) ";
	std::cin>>f; // 10.25
	mytime t1;
	t1=f;  /* first method using assignment operator */
	/* above statement invoke parameterized constructor */
	t1.show();
	std::cout<<std::endl<<"";
	std::cout<<std::endl<<" using 2nd method to make basic to class conversion";
	mytime t2(10,20);  /* 2nd method using constructor */
	t2.show();
	return 0;
}
