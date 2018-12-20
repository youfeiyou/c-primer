


//输入字符串，统计某个单词出现次数；练习5.14




#include<iostream>
#include<string>
#include<vector>
using namespace std;
int main()
{
	vector<string> sto;
	vector<int>cnt;
	string st;
while(cin>>st)
{
	if(sto.empty())
	{
	sto.push_back(st);
	cnt.push_back(1);
	
	}
	else
	{
		decltype(sto.size())i =0;
	for( i=0;i!=sto.size();++i)
	{
	   if(st==sto[i])
	  {
	    ++cnt[i];
	    break;
	   }
	
	}
	if(i==sto.size())
	{ sto.push_back(st);
	  cnt.push_back(1);
	}
	
	}


}


for (decltype(sto.size()) i = 0; i != sto.size(); ++i)
{
	cout<<sto[i]<<":"<<cnt[i]<<endl;
}





system("pause");
return 0;
}