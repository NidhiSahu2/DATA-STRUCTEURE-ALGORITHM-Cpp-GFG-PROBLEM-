#include<iostream>
#include<vector>
using namespace std;
int main()
{
	vector<int>vector1 = {1,2,3,4,5,6};
	vector<int>vector2={6,7,8,9,10,11,12};
	vector<int>vector3={34,56};
	for(const int& i : vector1)
	{
		cout<<i;
		
	}
	for(const int& i : vector2)
	{
		cout<<i;
	}
	for(const int& i: vector3)
	{
		cout<<i;
	}
	rturn 0;
}
