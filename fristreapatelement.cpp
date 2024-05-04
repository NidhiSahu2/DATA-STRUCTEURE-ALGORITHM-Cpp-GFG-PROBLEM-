#include<iostream>
using namespace std;
int firstReapeatingelement(int arr[], int n)
{
for(int i=0; i<n; i++)
{
for(int j=i+1; j<n; j++)
{
if(arr[i]==arr[j])
{
	return i;
}
}
}
return -1;	
	
}
int main()
{
	int arr[]={10,5,3,4,3,5,6};
	int n=sizeof(arr)/sizeof(arr[0]);
	int firstReapeatingelement (int arr[],int n);
	int index;
	if(index==-1)
	{
		cout<<"NO REPEATING ELEMENT FIND...."<<endl;
	}
	else{
		cout<<	"YES FOUND REPEAT ELEMENT"<<arr[index]<<endl;
	}
	return 0;
	
}
