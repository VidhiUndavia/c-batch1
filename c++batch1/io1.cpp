/* character input output with with get() and put() */
# include <iostream>
int main()
{
	
	int count=0;
	char c[100];
	std::cout<<std::endl<<"input text ";
	std::cin.get(c[0]);
	while (c[count]!='\n')
	{
		count++;
		std::cin.get(c[count]);
	}
	c[count]='\0';
	std::cout<<std::endl<<"** ** ** ** ** ** using function ** ** ** ** ** **"<<std::endl;
	std::cout<<std::endl<<"Number of character read "<<count;
	std::cout<<std::endl<<"string is "<<c<<std::endl;
	count=0;
	
	
	std::cout<<std::endl<<"** ** ** ** ** ** using function ** ** ** ** ** **"<<std::endl;
	while (c[count]!='\0')
	{
		std::cout.put(c[count]);
		count++;
	}
	return 0;
}
