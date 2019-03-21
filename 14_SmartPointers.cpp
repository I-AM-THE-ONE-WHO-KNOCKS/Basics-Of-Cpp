/*
	Author: Umesh Pimpalkar 
	Email: umeshppimpalkar@outlook.com

	Description: In this section the concept of smart pointer
	is explained.
*/

#include <iostream>

using namespace std;

class smartptr
{
public:
	int *ptr;

	smartptr(int *p = NULL)
	{
		ptr = p;
	}

	int &operator *()
	{
		return *ptr;
	}

	bool operator ==(smartptr p)
	{
		return(this->ptr == p.ptr);
	}

	//automatic deletion when the object goes out of scope
	~smartptr(){delete(ptr);}
};

int main()
{
	smartptr ptr(new int);
	smartptr null;// null pointer
	*ptr = 10;
	if(ptr == null)
	{
		cout<<"smartptr not created\n";
	}
	else
	{
		cout<<"smartptr is created which holds "<<*ptr<<endl;
	}
}