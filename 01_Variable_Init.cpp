/*
	Author: Umesh Pimpalkar 
	Email: umeshppimpalkar@outlook.com

	Description: In this file the working of Different types 
				 of Initializatons are explained.
*/

#include <iostream>

using namespace std;

int main()
{
	int val1;
	int val2;

	//copy initialization 
	val1 = 1U;
	val2 = 2U;

	cout<<"value 1 : "<<val1<<endl;
	cout<<"Value 2 : "<<val2<<endl;

	//direct initialization
	//can be used only at when you wish to initialize only at the time of declaration 
	int val3(3U);
	int val4(4U);

	cout<<"value 3 : "<<val3<<endl;
	cout<<"Value 4 : "<<val4<<endl;

	//uniform initiaization
	//cpp11 concept extended initializer lists 
	//advantage of this is it checks the types strictly. can not used float value to initialize int variable.
	int val5{5U};
	int val6{6U};

	cout<<"value 5 : "<<val5<<endl;
	cout<<"Value 6 : "<<val6<<endl;

	return 0;

}