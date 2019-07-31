#include <iostream>
#include "8.4_header1.h"
#include "8.4_header2.h"

int main()
{
	ns1::Student stud1(101,"Wang",'m');
	stud1.get_data();
	cout<<ns1::fun(5,3)<<endl;
	ns2::Student stud2(102,"Li",'f');
        stud2.get_data();
        cout<<ns2::fun(5,3)<<endl;
	return 0;
}
