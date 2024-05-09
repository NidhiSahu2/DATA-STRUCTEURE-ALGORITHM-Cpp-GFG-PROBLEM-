#include<bits/stdc++.h>
using namespace std;
void rotate(int arr[],int n)
{
int last = arr[n-1]	;
for(int i=n-1; i>0; i--){

arr[i]=arr[i-1];
}
arr[0]=last;
}
int main()
{
	int arr[]={1,2,3,4,5};
	int n=sizeof(arr)/sizeof(arr[0]);
	cout<<"Givn arr"<<' '<<endl;
	for(int i=0; i<n; i++)
	cout<<arr[i];
	rotate(arr,n);
	cout<<"ROTATE ARRAY IS GIVEN"<<endl;
	for(int i=0; i<n; i++)
     cout<<arr[i]<<' '<<endl;
     
	
	
}
