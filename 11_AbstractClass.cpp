/*
	Author: Umesh Pimpalkar 
	Email: umeshppimpalkar@outlook.com

	Description: In this section the concepts like pure virtual functions and
	 			 abstract class is explained.
*/
  
#include <iostream>

using namespace std;

class AbstractClass
{
public:
	virtual void className() = 0; //pure virtual function

	/* data */
};

//default definition of pure virtual function
void AbstractClass::className()
{
	printf("AbstractClass\n");
}

class derived : public AbstractClass
{
public:
	virtual void className()
	{
		AbstractClass::className();
	}
};

//abstract class without pure virtual function
class Shape
{
public:
    virtual ~Shape() = 0;
};

Shape::~Shape() {}

int main()
{
	derived D;

	D.className();
}
