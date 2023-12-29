#include<bits/stdc++.h>
using namespace std;
int getfib(int n){

if(n==0||n==1)

	return n;
	
return getfib(n-1) +	getfib(n-2);
}
int main()
{
	int n;
	cout<<"Enter a number for fibonaaci"<<endl;
	cin>>n;
	cout<<"Value of" <<"is " << getfib(n)<<endl;
}


	
