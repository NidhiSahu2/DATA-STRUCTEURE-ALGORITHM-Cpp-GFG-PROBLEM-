#include<iostream>
using namespace std;
int main()
{
    int arr[7]={1,2,3,4,45,67};
    int max=-1;//sabse chota element//
    for(int i=0; i<=7; i++){
	
        if(max<arr[i])
        {
            max=arr[i];
         }
    }
    cout<<("%d",max);
    return 0;
}


