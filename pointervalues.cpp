//working of cpp pointer//
#include<iostream>
using namespace std;
int main()
{
	int var =5;
	int* point_var=&var;
	cout<<"var"<<var<<endl;
	cout<<"address of a var"<<&var<<endl;
	cout<<point_var<<endl;
	cout<<*point_var<<endl;
}
