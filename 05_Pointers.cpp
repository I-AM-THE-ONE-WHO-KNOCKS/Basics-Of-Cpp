/*
	Author: Umesh Pimpalkar 
	Email: umeshppimpalkar@outlook.com

    Description: In this file the different concepts of pointers:
    1. Basic pointer declairation and usage
    2. Pointer to const and const pointer
    3. Pointer to function
    4. Pointer to class members.
    5. void pointers
    and its working is explained.
*/

#include <iostream>
#include <iomanip>

using namespace std;

class test{
public:
	int x;

	test()
	{
		x = 1U;
	}
	~test()
	{
		
	}
};

int add(int a, int b)
{
	return(a+b);
}

int main()
{
	//declairation of pointer
	int* ptr;
	int a(1U);
	int b(2U);

	ptr = &a;

	cout<<"Pointer value is : "<<*ptr<<setw(10)<<"  pointer address is : "<<&ptr<<endl;

	//pointer to constant 
	int const *ptr_to_const = &a;

	// *ptr_to_const = 10; -- this line will give error as we can  not modify the value

	//constant pointer
	int *const const_pointer = &a;

	// const_pointer++; -- this line will give error as we trying to modify address which is const

	//acessing arrays using pointers

	int array1[5] = {1U, 2U, 3U, 4U, 5U};

	int* ptr_array_single = array1;

	for(uint i = 0U; i < 5; i++)
	{
		cout<<" single dimention Array element "<<  i<<" : "<<*ptr_array_single+i<<endl;
	}

	int array2[3][3] = {{1U, 2U, 3U},
	                    {4U, 5U, 6U},
	                    {7U, 8U, 9U}};

	int* ptr_array_double = &array2[0][0];

	for(uint i = 0U; i < 9; i++)
	{
		cout<<"multi dimention Array element "<<  i<<" : "<<*(ptr_array_double+i)<<endl;
	}

	//poiinter to fuction

	int (*funptr)(int , int) = &add;

	int resutl = (*funptr)(a, b);

	cout<<"Result of function to pointer is : "<<resutl<<endl;

	//pointer to class member variable
	int test::*ptr_class_var = &test::x;

	test T;

	T.*ptr_class_var = 10U;

	cout<<"class variable using pointer : "<<T.*ptr_class_var<<endl;

	//void pointer: can point to any data type

	void* void_ptr;

	void_ptr = &T;//valid
	void_ptr = &a;//valid

	return 0;
}