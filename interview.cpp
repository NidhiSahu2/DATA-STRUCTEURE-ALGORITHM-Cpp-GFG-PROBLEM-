#include<iostream>
using namespace std;
class A {
	private:
		int val;
		public:
			A(int x)
			{
				val=x;
			}
			A()
			{
				
			}
};
int main()
{
	int x;
	A a(3);
	cout<<x<<endl;
	return 0;
}

