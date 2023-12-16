//how to take input by user in slection sort //
#include<iostream>
using namespace std;
int main()
{
int i;
int arr[100];
int n;
cout<<"enter the size of array:";
cin>>n;
cout<<"enter a element in array";
cin>>arr[i];
for(int i=0; i<n; i++)
{
	int index =i;
	for(int j=i+1; j<n; j++)
	{
		if(arr[j]<arr[index])
		index=j;
	
	}
	swap(arr[i],arr[index]);
}
for(int i=0; i<n; i++)
{
	cout<<arr[i]<<" ";
}
}sss
