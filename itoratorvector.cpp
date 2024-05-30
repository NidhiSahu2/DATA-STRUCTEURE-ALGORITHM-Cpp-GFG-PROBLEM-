//iterate hrough vector using iterators//
#include<iostream>
#include<vector>
using namespace std;
int main()
{
vector<int>num={1,2,3,4};
vector<int>::iterator iter;
iter =num.begin();
cout<<"num[0]"	<<*iter<<endl;
iter=num.begin()+2;
cout<<num[2]<<*iter<<endl;

iter=num.end()*2;
cout<<num[3]<<*iter<<endl;
return 0;

}

