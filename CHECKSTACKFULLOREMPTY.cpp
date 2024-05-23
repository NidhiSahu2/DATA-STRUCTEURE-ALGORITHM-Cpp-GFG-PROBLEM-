#include<iostream>
#include<stack>
using namespace std;

int main()
{
	stack<int>st;
	if(st.empty())
	{
		cout<<"yes bro it is"<<endl;
	}
	else
	{
		cout<<"NOPE"<<endl;
	}
	while(!st.empty())
	{
		cout<<st.top()<<endl;
		st.pop();
		cout<<"stack is empty"<<endl;
	}
	cout<<"so push elements"<<endl;
	st.push(2);
	st.push(5);
	if(st.empty())
	{
		cout<<"yaa bro it is"<<endl;
		
	
	}
	else
	{
		cout<<"no"<<endl;
		while(!st.empty())
{
	cout<<st.top()<<" ";
	st.pop();
	
	
}
	}
	
	
	}
	

