/*
	Author: Umesh Pimpalkar 
	Email: umeshppimpalkar@outlook.com

	Description: This section explains different type of casting: implicit,
	explicit, dynamic, static, reinterpreter, const  casting and typeid.
*/

#include <iostream>
#include <typeinfo>

using namespace std;

class U
{	
};
class implicit_cast
{
public:
	implicit_cast(U u)
	{
	};
};

class d_cast_base
{
};
class d_cast_derived : public d_cast_base
{
};

class r_A
{
};
class r_B
{
};

int main()
{
	int a = 20U;
	float b;
	b = a; // implicit casting

	U u;
	implicit_cast A = u;// implicit casting

	d_cast_base *d_B = new d_cast_base;
	d_cast_derived *d_D = new d_cast_derived;
	d_cast_base *d_cast;

	//static cast
	d_cast = static_cast<d_cast_derived*>(d_D);// no check of validity

	//dynamic cast
	d_cast = dynamic_cast<d_cast_derived*>(d_D);
	if(d_cast == 0)std::cout<<"null pointer base\n";//checks for validity

	//reinterpret cast
	r_A *r_a = new r_A;
	r_B *r_b = reinterpret_cast<r_B*>(r_a);

	//constant cast
	const r_A *const_a = new r_A;
	r_A *const_b = const_cast<r_A*>(const_a);

	r_A T_a;
	r_B T_b;

	if(typeid(T_a) == typeid(T_b))
	{
		std::cout<<"both class are same type\n";
	}
	else
	{
		std::cout<<"both class are not of the same type\n";
	}

	return 0;
}