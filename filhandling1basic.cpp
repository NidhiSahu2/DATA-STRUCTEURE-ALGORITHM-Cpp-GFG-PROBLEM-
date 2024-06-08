// cpp file handling//
#include<iostream>
#include<fstream>
using namespace std;
/*int main()
{
	
ofstream my("eaxple.txt");
my.close();
return 0;
	
}*//*ofstream my_file ("eample.txt");
if(!my_file.is_open())
{
	cout<<"error opening the file ."<<endl;
	return 1;
}*/

  ofstream my_file("eample.txt");
   if(!my_file.fail())
{
	cout<<"error opening the file ."<<endl;
	return 1;
}



