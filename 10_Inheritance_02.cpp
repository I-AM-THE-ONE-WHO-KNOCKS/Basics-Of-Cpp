/*
	Author: Umesh Pimpalkar 
	Email: umeshppimpalkar@outlook.com

	Description: In this code snippet the different concpets of inherirtance:
	virtual functions and virtual base class are demonstrated.
*/

#include <iostream>

using namespace std;

//virtual functions
class base
{
public:
	int x;
	virtual int get()
	{
		printf("base has : %d\n", x);
	}
	virtual void set(int val)
	{
		x = val;
	}
};

class derived_1 : public base
{
public:
	int y;
	virtual int get()
	{
		printf("derived_1 has : %d\n", y);
	}
	virtual void set(int val)
	{
		y = val;
	}
};

//virtual base class
class shape
{
public:
	shape()
	{
		printf("base class called\n");
	}
};

class triangle : public shape
{
public:
	triangle()
	{
		printf("triangle class called\n");
	}
};

class square : public shape
{
public:
	square()
	{
		printf("square class called\n");
	}
};

class triangleANDsquare : public triangle ,public square
{
public:
	triangleANDsquare()
	{
		printf("triangleANDsquare class is called\n");
	}
};

class Vshape
{
public:
	Vshape()
	{
		printf("base class called\n");
	}
};

class Vtriangle : virtual public Vshape
{
public:
	Vtriangle()
	{
		printf("triangle class called\n");
	}
};

class Vsquare : virtual public Vshape
{
public:
	Vsquare()
	{
		printf("square class called\n");
	}
};

class VtriangleANDsquare : public Vtriangle ,public Vsquare
{
public:
	VtriangleANDsquare()
	{
		printf("triangleANDsquare class is called\n");
	}
};

int main()
{
	derived_1 D;
	base &B = D;

	B.set(10);/*if this function is declared without virtual keyword
				then base class set function will get called even if
				the base class is ponting to derived class*/
	B.get();

	printf("-----------------------------------------------\n");

	triangleANDsquare T; /*this will show you that there are two copies
						 of base class are getting created*/
	printf("-----------------------------------------------\n");
	VtriangleANDsquare V_T;/*once we make virtual base class while deriving
						   the virtual keyword make sure that there is only one copy gets created*/
	return 0;
}