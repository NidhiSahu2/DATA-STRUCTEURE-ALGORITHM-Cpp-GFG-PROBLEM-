//change element of a deque//
#include<iostream>
#include<deque>
using namespace std;
int main()
{
	deque<int>nums= {1,2};
	cout<<"initial DEque";
	for(const int& num : nums)
	{
		cout<<num<<" ";
	}
	nums.at(0)=3;
	nums.at(1)=4;
	
	cout<<"uploaded queue"<<endl;
for	(const int& num : nums)
	{
		cout<<num<<" ";
	}
	return 0;
	
	
}
