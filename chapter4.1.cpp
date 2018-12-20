#include<iostream>
#include<vector>
#include<string>
using namespace std;

int main()
{
	
	int i=0;double d=2.3;
	if(i++&&i)
	{
	
	cout<<2;
	}
	vector<string>svec{"hello","ss"};
	auto it=svec.begin();
	//auto p=(*it).begin();
	cout<<*it;
	vector<int>ivec(10,1);
	for(auto &c:ivec)
	{
	 cout<<(( c%2==0)?c:c*2);
	
	}
	int score;
	cin>>score;
	string grade=(score>90)?"high pass":(score>75)?"pass":(score>60)?"low pass":"fail";
	cout<<grade<<endl;
	string s="world";
	string pl=s+((s[s.size()-1]=='s')?" ":"s");
	unsigned long ul1=3,ul2=7;
	cout<<(ul1&ul2)<<endl<<(ul1|ul2)<<endl<<(ul1&&ul2)<<endl<<(ul1||ul2)<<endl;
	

	vector<int>::size_type cnt=ivec.size();
	for(int i=0;i!=ivec.size();i++,cnt--)
	{ivec[i]=cnt;
	cout<<ivec[i];
	}cout<<endl;
	int x=0,y=2,v=0;
	v?++x,++y:--x,--y;
	cout<<x<<y<<endl;
   int k=2,j=1;
   double sl=static_cast<double>(k/j);
   k*=/*tatic_cast<int >*/int(d);
   cout<<k;

   const char *p="asd";
   char *qq=const_cast<char *>(p);
   int *ip=&k;
   char *pc=reinterpret_cast<char *>(ip);


	system("pause");
	return 0;
}