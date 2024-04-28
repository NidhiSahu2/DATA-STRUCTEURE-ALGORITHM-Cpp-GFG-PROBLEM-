#include<iostream>
using namespace std;

void factorial(int num)
{
	int fact=1;
	for(int i=1; i<=num;i++)
	fact=fact*i;
	cout<<fact;
	return; 
}
int main()
{
	int num;
	cin>>num;
	factorial(num);
	return 0;
}
