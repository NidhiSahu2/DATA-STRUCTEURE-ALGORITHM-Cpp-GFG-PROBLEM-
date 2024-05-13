#include<iostream>
using namespace std;
int findelement(int arr[],int n,int key)
{
	int i=1;
	for(int i=0; i<n; i++)
	{
		if(arr[i]==key)
		return i;
		
	}
	return -1;
}
int main()
{
	int arr[]={20,30,40,50,60};
	int N=sizeof(arr)/sizeof(arr[0]);
	int key =60;
	cout<<"findelement"<<findelement(arr,N,key);
	return 0;
}
