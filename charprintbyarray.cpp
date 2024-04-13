//creat in array of char type and store qa to z in it then print the elements in array//
#include<iostream>
using namespace std;
int main()
{

char array[26];
for(int i=0; i<26; i++)
{
	array[i]='a'+i;
	
}
for(int i=0; i<26; i++)
{
cout<<array[i]<<" "<<endl;
	
}
	
return 0;
}
