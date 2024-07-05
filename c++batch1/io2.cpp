/* using line oriented input output function */
/* getline and write */

#include<iostream>
#include<string.h>
int main()
{
	
	char *c;
	int size=100;
	/* can not read embedded space */
	// cin>>c;
	std::cout<<std::endl<<"enter 1st string ";
	std::cin.getline(c,size);
	std::cout<<std::endl<<"string is "<<c<<std::endl<<" Length is "<<strlen(c);
	std::cout<<std::endl<<"displaying string using another function ";
	std::cout<<std::endl;
	std::cout.write(c,strlen(c));
	return 0;
}





































































