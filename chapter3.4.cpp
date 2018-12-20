#include<iostream>
#include<string>
#include<vector>
using namespace std;
int main()
{
	string s{"abcde"};
	vector<int> ivec{1,10,15,25,36,47,58,69,74,85,99,100,147,555,666,888,999,1111,2222,33333};
	vector<string>svec{"hellO","world"};


	//3.22
	/*for(auto it = svec.begin();it!=svec.end()&&!it->empty();++it)
	{
	  for(auto a=(*it).begin();a!=(*it).end();++a)
	  {
	  *a=toupper(*a);
	  
	  }
	cout<<*it<<" ";
	}
	cout<<endl;
	cout<<svec[0];


	//测试
	for(auto b=ivec.begin();b!=ivec.end();++b)
	{
		cout<<*b;
	}
	cout<<s;
	


	//3.23
	for(vector<int>::iterator c=ivec.begin();c!=ivec.end();++c )
	{
	 (*c)*=2;
	
	cout<<*c;
	}
	cout<<endl;*/



	//二分查找算法
	/*int n=888;
	auto beg=ivec.begin();
	auto end=ivec.end();
	auto mid=(end-beg)/2+beg;
	while(mid!=end&&*mid!=n)
	{
		if(*mid>n)
		{
		end=mid;
		
		}
		else
		{
		beg=mid;
		}
		mid = (end - beg) / 2 + beg;
	}
	
	cout<<mid-ivec.begin();*/


	//3.25
	vector<unsigned>gra(11,0);
	unsigned score;
	auto pp=gra.begin();
	while(cin>>score)
	{
	 score/=10;
	( *(pp+score))++;
	}
	for(auto c:gra)
		cout<<c<<" ";

	

	system("pause");
	return 0;
}