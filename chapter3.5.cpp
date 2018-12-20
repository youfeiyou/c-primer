#include<iostream>
#include<vector>
#include<string>
using namespace std;
string sa[10];
//#pragma warning(disable:4996);
typedef int int_arry[5];
int main()
{
	int a[5][5]={0};
	int_arry *p3=a;
	cout<<**a;
	for(int_arry(*p)=begin(a);p!=end(a);++p)
	{
	for(int* q=begin(*p);q!=end(*p);++(q))
	{

	cout<<*q+1;
	
	}
	
	
	}
	for(auto &c:a)
	{
	for(auto &cc:c)
	{cout<<++cc;
	
	}
	
	
	}


/*	unsigned sco[11]={};
	vector<int>ivec(begin(a),end(a));
	for(auto c:ivec)
		cout<<c;
unsigned gr;
//auto p=&a[9],q=&a[8];
 char ca[]={'a','b','c','\0'};
 char cb[] ={ 'd','e','f','\0' };
  
 char cc[8]; strcpy_s(cc, cb);
strcat_s( cc,ca);
for(int i=0;cc[i]!='\0';i++)
cout<<cc[i];
*/

system("pause");
return 0;
}
