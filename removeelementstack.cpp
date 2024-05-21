#include<iostream>
#include<stack>
using namespace std;
void display_stack(stack<string>st);
int main()
{
	stack<string>colors;
	colors.push("red");
	colors.push("yellow");
	colors.push("blue");
	colors.push("green");
	cout<<"Intial stack"<<endl;
	display_stack(colors);
	colors.pop();
	cout<<"final stack";
	
}
void display(stack<string>st){

while(!st.empty())
{
	cout<<st.top()<<" ";
	st.pop();
	
	
}
cout<<endl;
}
