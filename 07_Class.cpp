/*
	Author: Umesh Pimpalkar 
	Email: umeshppimpalkar@outlook.com

	Description: In this file the different concepts of class
	like,
	1. Declairation
	2. Access specifiers
	3. constructor, copy constructor(deep and shallow copy)
	4. Distructor
	5. static class members
	6. Friend function
	are explained.
*/

#include <iostream>
#include <cstring>

using namespace std;

class Test_class
{
private:
	float w;
	float x;

protected:
	float y;

public:
	float z;
	/*we can not initialize non const static member variable 
	inside class, Need to be initialised outside of the class
	*/
	static int a;
	//constructor without params
	Test_class()
	{
		w = 0.0F;
		x = 0.0F;
		y = 0.0F;
		z = 0.0F;
	}
	//constructor with params 
	Test_class(float a, float b, float c, float d)
	{
		w = a;
		x = b;
		y = c;
		z = d;
	}

	//copy constructor: shallow copy
	Test_class(const Test_class& T)
	{
		w = T.w;
		x = T.x;
		y = T.y;
		z = T.z;
	}

	~Test_class()
	{

	}
	//member function
	void setwx(float a, float b)
	{
		w = a;
		x = b;

		cout<<"updated values are:"<<endl<<"w: "<<w<<endl<<"x: "<< x<<endl; 
	}
	//static member function
	static void inc_and_show()
	{
		a++;
		cout<<"value of static variable after inc is:"<< a<<endl;
	}
	friend void show(Test_class T);
};

void show(Test_class T)
{
	cout<<T.w<<T.x<<T.y<<T.z<<endl;
}

int Test_class::a = 0U;

class Deep_copy
{
private:
		char *string;
		int size;
public:
	Deep_copy(const char *str);
	//copy constructor: deep copy
	Deep_copy(const Deep_copy& DP);
	void print()
	{
		cout<<string<<endl;
	}
	void update(const char *str);
};

Deep_copy::Deep_copy(const char *str) 
{ 
    size = strlen(str); 
    string = new char[size+1]; 
    strcpy(string, str); 
} 

Deep_copy::Deep_copy(const Deep_copy& DP)
{
	size = DP.size;
	string = new char[size+1];
	strcpy(string, DP.string);
}

void Deep_copy::update(const char *str)
{
	delete[]string;
	size = strlen(str);
	string = new char[size+1];
	strcpy(string, str);
}

int main()
{
	Test_class T1; // calls default constructor

	show(T1);//friend function

	Test_class::inc_and_show();// prints a = 1;

	Test_class T2(1.0F, 2.0F, 3.0F, 4.0F);// calls parameterised constructor

	show(T2);

	T1 = T2; // calls copy constructor : shallow copy

	cout<<"after copy T1 is same as T2"<<endl;
	show(T1);

	//set w and x variable of T2
	T2.setwx(8.0, 9.0);

	//deep copy working
	Deep_copy s1("hello");

	Deep_copy s2 = s1;

	s1.print();
	s2.print();

	s1.update("bye");

	s1.print();
	s2.print();

	return 0;
}