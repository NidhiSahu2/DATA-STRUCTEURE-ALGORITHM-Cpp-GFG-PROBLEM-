#include<iostream>
#include<queue>
using namespace std;
int main()
{
	queue<int>q;
	q.push(2);
	q.push(3);
	q.push(4);
	q.push(5);
	
	int fornt=q.front();
	cout<<"first elements"<<fornt<<endl;
	int back=q.back();
	cout<<"last elements"<<back<<endl;
	
	
	
}
