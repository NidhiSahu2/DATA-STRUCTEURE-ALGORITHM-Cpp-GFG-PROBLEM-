#include<iostream>
#include<map>
#include<unordered_map>
using namespace std;

bool checkIsmorphic(string s1, string s2)
{
	unordered_map<char,char>m;
	for(int i=0; i<s1.length(); i++)
	{
		if(m.find([s1[i]])!=m.end())  
		{
			(m[s1[i]] != s2[i])
			{
				return false;
			}
		   }   
	}
	
	else
	{
		m[s1[i]]=s2[i];
	}
}



if(s1.length() != s2.length())
{
	return false;
	
}

bool s1s2 = checkIsmorphic(s1,s2);
bool s2s1 = checkIsmorphic(s2,s1);

int main()
{
	string s1,s2;
	cin>>si>>s2;
	cout<<(checkIsmorphic(s1,s2)? "is isomorphic" :   "no isoprphic")<<endl;
	return 0;
	
}
