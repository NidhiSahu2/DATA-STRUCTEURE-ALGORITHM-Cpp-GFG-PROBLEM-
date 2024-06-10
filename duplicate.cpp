//wap to duplicate arraty find esaliy //
#include<iostream>
using namespace std;
int main()
{
int arr[7]={1,2,2,3,4,6,7};
for(int i=0; i<=6; i++){
	for(int j=i+1; j<=6; j++)
	{
	if(arr[i]==arr[j]){
		cout<<"this is a dulicate array"<<arr[i]<<endl;
	}
	
	}
}





}
	
	
