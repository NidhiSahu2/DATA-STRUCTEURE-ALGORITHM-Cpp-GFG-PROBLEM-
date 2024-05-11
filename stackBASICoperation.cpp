#include<iostream>
#include<stack>
using namespace std;
void printELEMENTOFSTACK(stack<int>s)
{
	while(!s.empty())
	{
		cout<<s.top()<<endl;
		s.pop();
	}
}
int main()
{
	stack<int>s;
	s.push(2);
	s.push(10);
	s.push(3);
	s.push(5);
	cout<<s.empty()<<endl;
	cout<<s.size()<<endl;
	printELEMENTOFSTACK(s);
	
}
