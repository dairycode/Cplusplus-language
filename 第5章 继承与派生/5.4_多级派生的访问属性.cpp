#include <iostream>
using namespace std;

class A
{
public:
	int i;
protect:
	void f1();
	int j;
private:
	int k;
};

class B:public A
{
public:
	void f2();
protected:
	voif f3();
private:
	int m;
};

class C:protected B
{
public:
	void f4();
private:
	int n;
};
