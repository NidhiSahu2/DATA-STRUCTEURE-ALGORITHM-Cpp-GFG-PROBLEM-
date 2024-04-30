#include<iostream>
using namespace std;

void findmajority(int arr[], int n)
{
	int maxcount=0;
	int index=-1;
	for(int i=0; i<n; i++)
	{
		int count=0;
		for(int j=0; j<=n; j++)
		
			if(arr[i]==arr[j])
			count++;
		if(count>maxcount)
		{
			maxcount=count;
			index=i;
		}
	}

if(maxcount>n/2)
cout<<arr[index];
else
{
	cout<<"no majority element"<<endl;
}
}
int main()
{
	int arr[]={1,1,1,1,1,1,2,3,4};
	int n=sizeof(arr)/sizeof(arr[0]);
	findmajority(arr,n);
}
