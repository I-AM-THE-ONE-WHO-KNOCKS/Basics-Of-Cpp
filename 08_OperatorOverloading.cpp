/*
	Author: Umesh Pimpalkar 
	Email: umeshppimpalkar@outlook.com

	Description: In this file the concepts of operator overloading 
	using member function and friend functions are explained.
	Also overloading of increament operator is simulated.
*/

#include <iostream>

using namespace std;

class OverLoading
{
	int x;

public:
	//default constructor with initializer lists
	OverLoading():x(0)
	{
	}
	OverLoading(int a)
	{
		x = a;
	}
	//overloading of substraction operator using member function
	OverLoading operator-(const OverLoading a);
	//overloading of addition operator using friend function
    friend OverLoading operator+(const OverLoading a, const OverLoading b);
    
    //overloading of increament and decreament operators
    OverLoading& operator++(); // prefix
    OverLoading& operator--(); //prefix

    OverLoading operator++(int); //postfix
    OverLoading operator--(int); //postfix

    void show()
    {
    	cout<<"x : "<<x<<endl;
    }
};

OverLoading OverLoading::operator-(const OverLoading a)
{
	OverLoading temp;
	temp.x = x - a.x;
	return(temp);
}

OverLoading operator+(const OverLoading a, const OverLoading b)
{
	OverLoading temp;
	temp.x = a.x + b.x;
	return(temp);
}

OverLoading& OverLoading::operator++()
{
	if(x == 9)
    x = 0;
	++x;

	return *this;
}

OverLoading& OverLoading::operator--()
{
	if(x == 0)
	x = 9;
	--x;

	return *this;
}

OverLoading OverLoading::operator++(int)
{
	OverLoading temp(x);

	++(*this);

	return temp;
}

OverLoading OverLoading::operator--(int)
{
	OverLoading temp(x);

	--(*this);

	return temp;
}

int main()
{
	OverLoading m1(6U);
	OverLoading m2(3U);
	OverLoading m3;

	m3 = m1 + m2;

	m3.show();

	m3 = m1 - m2;

	m3.show();
	
	++m3;
	m3.show();

	--m3;
	m3.show();

	m3++;
	m3.show(); // this will print the same result as ++m3 as we are doing shallow copy here
	
	m3--;
	m3.show(); // this will print the same result as --m3 as we are doing shallow copy here
	return 0;
}

