#include<iostream>
#include<string>
#include<vector>
using namespace std;
int main()
{
	string s;
    
	vector<int>ivec;
	//vector<string>svec=ivec;
	vector<string>svec;

	while(cin>>s)
		svec.push_back(s);
	cout<<svec[0][3];
	/*for(auto p=svec.begin();p!=svec.end();++p)
	{
	 for(auto q=(*p).begin();q!=(*p).end();++q)
	 {
	   *q=toupper(*q);
	 
	   cout<<*q<<"  ";
	 }
	
	
	
	}
	for(decltype(svec.size()) i=0;i!=svec.size();++i)
	{
	  for(decltype(svec[i].size()) j=0;j!=svec[j].size();++j)
	  {
		  svec[i][j]=toupper(svec[i][j]);
	      cout<< svec[i][j]<<" ";
	  
	  
	  }
	
	
	
	}



	*/










//输入一组英文将每个转大写 练习3.17
	/*while(cin>>s)
	{
		svec.push_back(s);
	}
	for(auto &c:svec)
	{
	  for(auto &cc:c)
	  {
		 cc=toupper(cc);
	  }
	  cout<<c<<endl;
	}

//结束

	/*for(int i=0;i!=100;++i)
	{
	ivec.push_back(i);
	//cout<<ivec[i];
	
	}

	while(getline(cin,s))
	{
	svec.push_back(s);
	
	}*/


	//练习3.20
	/*for(decltype(ivec.size()) index=0;index!=101;index++)
	{
	  ivec.push_back(index);
	}
	for(vector<int>::size_type i = 0;i!=ivec.size()-1;i++)
	{
		//decltype(ivec.size()) sum1=ivec[i]+ivec[i+1];
		//cout<<sum1<<" ";
		decltype(ivec.size()) sum2=ivec[i]+ivec[ivec.size()-1-i];
		cout<<sum2<<" ";
	}
	*/















	system("pause");

	return 0;





}