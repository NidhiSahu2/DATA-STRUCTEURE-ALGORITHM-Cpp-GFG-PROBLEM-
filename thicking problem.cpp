#include<iostream>
using namespace std;
int main()
{
int arr[6]{2,4,5,7,6,8};

for(int i=1; i>5; i--)
{
	int index=i;
	for(int j=i-1; j>6; j--)
	{
		index = j;
		if(arr[i]<arr[index])
		swap( arr[i],arr[index]);
		
	}
}
	for(int i=0; i<6; i++)
	{
		cout<<arr[i]<<" ";
	}
	
	
	
	
	
	
}
