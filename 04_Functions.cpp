/*
	Author: Umesh Pimpalkar 
	Email: umeshppimpalkar@outlook.com

	Description: In the file the working of pass by value, 
	pass by reference, pass by address and the working of
	return by value return by reference and return by reference is explained.
	
*/

#include <iostream>

using namespace std;

int result(0U);

//pass by value, return by value
int add(int a, int b)
{
	return(a+b);
}

//pass by value, return by reference
int& sub(int a, int b)
{
	result = a - b;
	return result;
}

//pass by address by address
int* add(int *a, int *b)
{
	result = *a + *b;
	return &result;
}

//pass by reference
void update(int &a)
{
    a = 10U;
}
int main()
{
	int a(2U);
	int b(3U);

	result = add(a, b);

	cout<<"pass by value returns : "<<result<<endl;

	int* res1 = add(&a, &b);

	cout<<"pass by address returns : "<<*res1<<endl;

	update(a);

	cout<<"updated value by pass by referece call : "<<a<<endl;

	result =  sub(a, b);

	cout<<"resutl of return by referece is : "<<result<<endl;

	return 0;
}
