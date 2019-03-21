/*
	Author: Umesh Pimpalkar 
	Email: umeshppimpalkar@outlook.com

	Description: In this file the usage and working of dynamic initialization 
	in c++ is explained.
*/

#include <iostream>

using namespace std;

int main()
{
	int* ptr = new int;
	int m = 0U;
	int n = 0U;

	*ptr = 10U;

	cout<<*ptr<<endl;

	delete ptr;

	//single dimention array

	int* array_single = new int[5U]{1U,2U,3U,4U,5U};

	for(uint i = 0U; i < 5U; i++)
	{
		cout<<*(array_single+i)<<endl;
	}

	//two dimentional array
	cout<<"Enter 'm' for two dimentional array"<<endl;

	cin>>m;

	cout<<"Enter 'm' for two dimentional array"<<endl;

	cin>>n;

	float* array_double = new float[m];

	for(uint j = 0U; j < m; j++)
	{
		array_double = new float[n];
	}

	//will print the address , shows how the memory is allocated
	for(uint i = 0U; i < m*n; i++)
	{
		cout<<&array_double[i]<<endl;
	}

	return 0;
}