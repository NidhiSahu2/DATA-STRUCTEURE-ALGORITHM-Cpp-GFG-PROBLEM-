#include<iostream>
#include<queue>
using namespace std;
int main()
{
	priority_queue<int>num;
	num.push(1);
	num.push(98);
	num.push(78);
	num.push(89);

cout<<"priority queue"<<endl;
while(!num.empty())

{
	cout<<num.top()<<" "<<endl;
	num.pop();
}
cout<<endl;
return 0;

}
