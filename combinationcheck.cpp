#include<bits/stdc++.h>
using namespace std;

void findpair(int arr[],int n,int diff)
{
	for(int i=0; i<n; i++)
	{
		for(int j=0; j<n; j++)
		{
			if(i==j)
			continue;
			if((arr[j]-arr[i])==diff)
			{
				cout<<"found pair" <<arr[i]<<  arr[j]<<endl;
				return ;
			}
		}
	}
	cout<<"no such pair";
}
int main()
{
	int arr[]={1,8,30,40,100};
	int n=sizeof(arr)/sizeof(arr[0]);
	int diff=-60;
	findpair(arr,n,diff);
	return 0;
}
