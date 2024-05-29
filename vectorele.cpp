#include<iostream>
#include<vector>
using namespace std;
int main()
{
	vector<int>numbers ={1,100,10,70,100};
	cout<<"numbers are"<<endl;
	for(const int& num: numbers)
	{
		cout<<num<<endl;
	}
	return 0;
}
