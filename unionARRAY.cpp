#include<iostream>
using namespace std;
vector<int>Unionarray(int arr[],int n,int m)
{
	set<int>s;
	for(int i=0; i<n; i++)
	{
		s.insert(arr1[i]);
	}
	for(int i=0; i<m; i++)
	{
		s.insert(arr2[i]);
	}
	vector<int>vec(s.begin(),s.end());
	return vec
}
int main()
{
	int arr1[]={1,2,2,2,3};
	int arr2[]={1,2,3,4,6,3};
	vector<int>uni=Unionarray(arr1,arr2,n,m);
	for(int i: uni)
	{
		cout<<i<<" ";
	}
	return 0;
}
