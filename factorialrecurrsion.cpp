#include<bits/stdc++.h>
using namespace std;
int getfactorial(int n){

if(n<=1)

	return 1;
	

int aage_ka_factorial = getfactorial(n-1);

int answer=n*aage_ka_factorial;
return answer;
}
int main()
{
	int n;
	cout<<"Enter a number for factoiral"<<endl;
	cin>>n;
	cout<<"Value of" <<"is " << getfactorial(n)<<endl;
}

