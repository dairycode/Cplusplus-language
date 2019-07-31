#include <iostream>
using namespace std;

int main()
{
	float grade;
	cout<<"enter grade:";
	while(cin>>grade)
	{
		if(grade>=85) cout<<grade<<" GOOD!"<<endl;
		else if(grade<60) cout<<grade<<" FAIL!"<<endl;
		else cout<<grade<<" OK!"<<endl;
		cout<<"enter grade:";
	}
	cout<<"The end."<<endl;
	return 0;
}
