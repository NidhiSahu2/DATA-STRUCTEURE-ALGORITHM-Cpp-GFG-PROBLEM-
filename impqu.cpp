#include<iostream>
#include<map>
using namespace std;

void revresestr(string& str)
{
	int n =str.length();
	
	for(int i=0 ;i<n/2; i++)
	{
		swap(str[i],str[n-i-1]);
		
	}
	
	
}
int main()
{
	string str = "nidhi";
	revresestr( str);
	cout<<str;
	return 0;
	
}

