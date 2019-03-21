/*
	Author: Umesh Pimpalkar 
	Email: umeshppimpalkar@outlook.com

	Description: In this section the different concepts of
	strings are explained.
*/

#include <iostream>
#include <string>
#include <cstring>

using namespace std;

int main()
{
	string s, s1;
	s = "Again";
    s1 = "Hello";

    string s2(s1);

    cout << "s2 is: " << s2 << endl;

    string s3 (s1.begin(),s1.end()- 3);
    cout << "s3  is: " << s3 << endl;

    s1.append(s);
    cout << "s1  after append is: " << s1 << endl;

    s2.assign(s);
    cout << "s2 after assign  is: " << s2 << endl;

    string str1 = "How are you ?";

    string::size_type c;
    c = str1.capacity();
    cout << "Capacity of str1 is: " << c << endl;

    string::iterator It = str1.begin();

    while ( It != str1.end() )
    {
    	if ( *It == ' ' )
    		*It = '\n';
    	cout << *It++;
    }
    cout << endl;

    string str2 = "Nice";
    char *ary = new char[str2.length()+1];

    // strcpy ( ary, str ); that is wrong way
    strcpy ( ary, str2.c_str() ); // that is correct

    cout << ary << endl;

    size_t comp = str1.compare(str2);
    if(comp == 0)
    {
    	cout<<"str1 and str2 are equal"<<endl;
    }
    else
    {
    	cout<<"str1 and str2 are not equal"<<endl;
    }

    char name[15];

     str1.copy(name, // copy to array
            5,    // how many char
            0);     // start position from str
     cout<<"name after copy is "<<name<<endl;
}