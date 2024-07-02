#include<bits/stdc++.h>
using namespace std;

void  findmissing(int arr[],int n, int low, int high)

{
for(int i=low; i<=high; i++)
{
	bool found = false;
	
	for(int j=0; j<n; j++)
	{
	if(arr[j]==i)
	{
	
	found = true;
	break;
}
	
	}
	
	if(!found)
	{
		cout<<i << " ";
	}
}
}

int main()
{
	int arr[]= {1,3,5,5};
	int n = sizeof(arr)/sizeof(arr[0]);
	int low= 1, high =50;
	findmissing(arr, n , low,high);
	return 0;
}
