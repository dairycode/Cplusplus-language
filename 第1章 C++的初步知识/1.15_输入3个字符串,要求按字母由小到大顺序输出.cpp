#include <iostream>
#include <string>
using namespace std;

int main()
{
	string string1,string2,string3,temp;
	cout<<"Please input three strings:";
	cin>>string1>>string2>>string3;
	if(string2>string3) {temp=string2;string2=string3;string3=temp;}
	//使串2<=串3
	if(string1<=string2) cout<<string1<<" "<<string2<<" "<<string3<<endl;
	//如果串1<=串2,则串1<=串2<=串3
	else if(string1<=string3) cout<<string2<<" "<<string1<<" "<<string3<<endl;
        //如果串1>串2,且串1<=串3,则串2<串1<=串3
	else cout<<string2<<" "<<string3<<" "<<string1<<endl;
        //如果串1>串2,且串1>串3,则串2<=串3<=串1
	return 0;
}
