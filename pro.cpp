#include<iostream>
#include<string.h>
using namespace std;
int main(){

string a("abc");
string b("def");
  string c=a+b;
cout<<c<<endl;
a=c;
b=a;
c=b;

cout<<a<<endl;
cout<<b<<endl;
cout<<c<<endl;
}
