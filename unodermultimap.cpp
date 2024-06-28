#include<iostream>
#include<map>
using namespace std;

int main()
{
	unordered_multimap<string,int>map;
	map.insert(make_pair("apple ", 6));
	map.insert(make_pair("banana",9));
	map.insert(make_pair("banana",3));
	
	for(auto pair:map)
	{
		cout<<"fruit"<<pair.first<<endl;
		cout<<"fruit"<<pair.second<<endl;
		
	}
	return 0;
}

