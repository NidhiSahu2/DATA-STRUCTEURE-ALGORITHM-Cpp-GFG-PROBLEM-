//WAP to slove a problem of zero string using cpp language//
#include <iostream>
using namespace std;
#include<iostream>
using namespace std;
int main() {
	// your code goes here
	int n;
	int t;
	cin>>n;
	string s;
	cin>>s;
	int zero=0;int one=0;
	for(int i=0; i<n;i++)
	{ 
	    if(s[i] =='0')
	{
	    zero++;
	}
	else{
	    ++one;
	}
	
	}
	if(one==zero)
	{
	cout<<one<<endl;
	
	}
	else if(one>zero){
	
	cout<<zero+1<<endl;
	
	}
	else{
	    cout<<one<<endl;
	}
	return 0;
}

