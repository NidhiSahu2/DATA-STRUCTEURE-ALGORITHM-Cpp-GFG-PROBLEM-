//pointer and array//
#include<iostream>
using namespace std;
int main()
{
	float arr[4];
	float *ptr;
	cout<<"displaying array "<<endl;
	for(int i=0; i<3; i++)
	{
		cout<<"&arr["<<i<<"]="<<&arr[i]<<endl;
	}
	ptr=arr;
	cout<<"displaying address using array"<<endl;
	for(int i=0; i<3; ++i)
	{
		cout<<"ptr"<<i<<" "<<ptr+1<<endl;
	}
	return 0;
}

