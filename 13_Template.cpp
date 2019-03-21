/*
	Author: Umesh Pimpalkar 
	Email: umeshppimpalkar@outlook.com

	Description: This section of program shows the basic concepts of template
	functions and template class.
*/

#include <iostream>

using namespace std;

template <typename T>
//function to do multiplication
//The template function can be used for different types
/*The below function supports only one type. This can be extended 
  to multiple type as template <typename T1, typename T2....>*/
T multiply(T x, T y)
{
	return(x * y);
}

//template class
template<class S>
class template_class
{
public:
	S x;
	template_class(S val):x(val){}
};

int main()
{
	int a = 10U;
	float b = 5.0F;
	std::cout<<"multiplication of (int, int) is: "<<multiply(a, a)<<"\n";
	std::cout<<"multiplication of (float, float) is: "<<multiply(b, b)<<"\n";

	template_class<int> temp(a);
	std::cout<<"template_class is initialised to : "<<temp.x<<std::endl;
}

