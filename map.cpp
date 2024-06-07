#include<iostream>
#include<map>
using namespace std;
int main()
{
	map<int,string>student;
	
	student[1]="black";
	student[2]="greem";
	student.insert(make_pair(3,"yellow"));
	student.insert(make_pair(4,"red"));
	student[5]="pink";
	student[6]="blue";
	for(int i=1; i<=student.size(); i++)
	{
		cout<<"student["<<i<<"];"<<student[i]<<endl;
	}
	return 0;
}

