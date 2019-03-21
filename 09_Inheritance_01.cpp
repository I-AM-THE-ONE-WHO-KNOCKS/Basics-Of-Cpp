/*
	Author: Umesh Pimpalkar 
	Email: umeshppimpalkar@outlook.com

	Description: In this code snippet the different concpets of inherirtance:
	public, private and protected inheritance are illustrated.Also the order in
	which the constructor and distructors are called are demonstrated
*/

#include <iostream>

using namespace std;

class base
{
	int m_private;

protected:
	int m_protected;

public:
	base(int a, int b, int c):m_private(a),m_protected(b),m_public(c)
	{
		cout<<"base constructor called"<<endl;		
	}
	~base()
	{
		cout<<"base distructor called"<<endl;
	}
	int m_public;

	int getprivate()
	{
		return m_private;
	}
};

//public inheritance
class public_Inh : public base
{
public:
	int m;

	public_Inh(int a, int b, int c, int d):base(a, b, c), m(d)
	{
		cout<<"public_Inh constructor called"<<endl;
	}
	int add_all()
	{
		int result = getprivate() + m_protected + m_public + m;
	}
	~public_Inh(){
		cout<<"public_Inh distructor called"<<endl;
	}
};

//protected inheritance
class protected_Inh : protected base
{
public:
	protected_Inh(int a, int b, int c):base(a, b, c)
	{
		cout<<"protected_Inh constructor called"<<endl;
	}

	void print_base()
	{
		cout<<getprivate();
		cout << m_protected << m_public<<endl;
	}
	~protected_Inh(){
		cout<<"protected_Inh distructor called"<<endl;
	}
};

//private inheritance
class private_Inh : private base
{
public:
	private_Inh(int a, int b, int c) : base(a, b, c)
	{
		cout<<"private_Inh constructor called"<<endl;
	}
	void setvariables(int a, int b)
	{
		m_protected = a;
		m_public = b;
	}
	void showVariables()
	{
		cout<<getprivate()<<m_protected<<m_public<<endl;
	}
	~private_Inh(){
		cout<<"private_Inh distructor called"<<endl;
	}
};

int main()
{
	public_Inh mPublic(1, 2, 3, 4);

	mPublic.m_public = 10; // works fine
	//mPublic.m_protected = 2; //can not do this
	//mpublic.m_private = 3; // private members are not inherited

	cout<<"sum of all public_Inh members : "<<mPublic.add_all()<<endl;

	protected_Inh mProtected(1, 2, 3);

	//mProtected.m_public = 5; //can not do this

	mProtected.print_base();

	private_Inh mPrivate(3, 6, 9);

	//mPrivate.m_protected = 2; //is wrong as the member is privately inherited
	//mPrivate.m_public = 2; //is wrong as the member is privately inherited

	mPrivate.showVariables();

	mPrivate.setvariables(7, 8);

	mPrivate.showVariables();

	//check the order in which the constructors and distructors are called

	return 0;
}