/* using width() to set width for digits (effect remain only one time)
  using fill() for padding field width (effect remain untill reset) */
  /* setprecision to set number of digits after point (effect remain untill reset)*/

#include<iostream>
#include<string.h>
int main()
{
	
	int item[4];
	float price[4];
	int i=0;
	std::cout<<std::endl<<" Enter details for item and price";
	for (;i<4;i++)
	{
		std::cout<<std::endl<<" Enter quantity [ "<<i+1<<" ] :- ";
		std::cin>>item[i];
		std::cout<<std::endl<<" Enter price :- [ "<<i+1<<" ] ;- ";
		std::cin>>price[i];
	}
	std::cout<<std::endl;
	std::cout.width(10);
	std::cout<<"item";
	std::cout.width(10);
	std::cout<<"price";
	std::cout.width(10);
	std::cout<<"total"<<std::endl;
	std::cout.fill('*');
	std::cout.precision(3);
	for (i=0;i<4;i++)
	{
		std::cout.width(10);
		std::cout<<item[i];
		std::cout.width(10);
		std::cout<<price[i];
		std::cout.width(10);
		std::cout<<price[i]*item[i];
		std::cout<<std::endl;
	}
	return 0;
}

