#include<iostream>
#include<string>
#include<vector>
using namespace std;

int main()
{  vector<string>svec{"abc","def","ghi","jkl","mno","pqrs","tuv","wxyz"};
	string str;
	getline(cin,str);
	for(int i=0;i!=str.size();++i)
	{ str[i]=tolower(str[i]);
	  for(auto it = svec.begin();it!=svec.end();++it)
	  {
	   for(auto p=(*it).begin();p!=(*it).end();++p)
	   {
	    if(str[i]==*p)
		{
		 cout<<it-svec.begin()+2;
		 break;
		
		}
	   
	   }
	 
	  }
	
	}

    cout<<endl;
	system("pause");
	return 0;

}