#include<iostream>
using namespace std;
int mul (int& a, int& b)
{
   	return a*b;
   	
}
int main()

{
	int a;
	cout<<"value of a"<<endl;
	cin>>a;
	int b;
	cout<<"value of b"<<endl;
	cin>>b;
	mul(a,b);
	int cal = mul(a,b);
	cout<<cal<<endl;
}
