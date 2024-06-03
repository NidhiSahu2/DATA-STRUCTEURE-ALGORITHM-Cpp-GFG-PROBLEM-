//modify a vlaue by ref values//
#include<iostream>
using namespace std;
int main()
{
	string city="paris";
	string& ref_city=city;
	cout<<city<<endl;
	cout<<ref_city<<endl;
	ref_city="new york";
	cout<<"modify a val"<<endl;
	cout<<city<<endl;
	cout<<ref_city<<endl;
}
