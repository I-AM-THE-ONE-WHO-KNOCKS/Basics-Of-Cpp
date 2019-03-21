/*
	Author: Umesh Pimpalkar 
	Email: umeshppimpalkar@outlook.com

	Description: In this file the usage and working 
	of preprocessor directives is explained.

*/

#include <iostream>

using namespace std;

#define Zero 0.0F;

#define One

int main()
{
#ifdef One
	cout<<"One"<<endl;
#else
	cout<<"zero: "<<Zero<<endl;
#endif
return 0;
}