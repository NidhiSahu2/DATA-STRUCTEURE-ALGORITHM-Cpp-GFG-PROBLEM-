#include<iostream>
#include<queue>
using namespace std;
int main()
{
	priority_queue<int>pq;
	if(pq.empty())
	{
		cout<<"yes"<<endl;
		
	}
	else
	{
		cout<<"no"<<endl;
	}
	cout<<"insert element is queue"<<endl;
	pq.push(8);
	pq.push(81);
	pq.push(83);
	pq.push(88);
	if(pq.empty())
	{
		cout<<"yes bro"<<endl;
	}
	else
	{
		cout<<"no"<<endl;
		
		cout<<endl;
	}
	while(!pq.empty())
		{
			cout<<pq.top()<<" ";
			pq.pop();
			
		}
	
}
