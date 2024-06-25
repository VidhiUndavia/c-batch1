/* example of hierarchical inheritance */
#include<iostream>
#include<string.h>
using namespace std;
class media                /* base class */
{
	protected:
		char title[20];		float price;
	public:
		media(char *ptr,float p) /* parameterized constructor */
		{
			cout<<endl<<"media class constructor called";
			strcpy(title,ptr);
			price=p;
			
		}
		~media()
		{
			cout<<"\n Desctructor call For Base class(media)...."<<endl;
			
		}
};
class CD:public media     /* first derived class*/
{
	private:
	char c_type[15];	int qty;
	public:
		CD(char *ptr,float p,char *c,int q):media(ptr,p)
		{
			cout<<endl<<"CD constructor called";
			strcpy(c_type,c);
			qty=q;
			
		}
		void display();
		~CD()
		{
			cout<<endl<<" destructor for derived class (CD) ";
		}
};
void CD::display()
{
	cout<<"\nTitle : "<<title;
	cout<<"\nCD Type: "<<c_type;
	cout<<"\nPrice : "<<price;
	cout<<"\nQuantity : "<<qty;
	cout<<"\nAmount : Rs. "<<qty*price;
}
class Flopy:public media   /* second drived class */
{
	private:
		char f_type[15];	int qty;
	public:
		Flopy(char *ptr,float p,char *c,int q):media(ptr,p)
		{
			cout<<endl<<"floppy constructor called";
			strcpy(f_type,c);
			qty=q;
			
		}
		void display();
		~Flopy()
		{
			cout<<endl<<" destructor for derived class(Flopy) ";
		}
};
void Flopy::display()
{
	cout<<"\nTitle :"<<title;
	cout<<"\nFlopy type: "<<f_type;
	cout<<"\nPrice : "<<price;
	cout<<"\nQuantity : "<<qty;
	cout<<"\nAmount  :Rs. "<<qty*price;
}
int main()
{
	
	CD cd1("Samsung",10.00,"700MB/80 MIN",5);
	Flopy fl1("Sony",12.00,"1.44MB",5);
	//cout<<endl<<"\t\t\t\t.......Media Detail........."<<endl;
	cout<<endl<<"...Cd Detail..."<<endl;
	cd1.display();
	cout<<endl<<"\n...Flopy Detail..."<<endl;
	fl1.display();
	return 0;
}
