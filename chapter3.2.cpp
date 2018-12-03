#include<iostream>
#include<string>
using namespace std;
int main()
{
	/*string s1, s2;
	getline(cin,s1);
	//cin>>s2;
	for(auto &c:s1)
	{
	char s=tolower(c);
	cout<<s<<" ";

	}
	auto &c1=s1[0];
	cout<<c1<<endl;
	string s("asdfghASD");
	for(decltype(s.size()) index=0;index!=s.size()&&s[index]!=' ';index++)
  s[index]=toupper(s[index]);
		cout<<s<<endl;
		cout<<"***************";
		string s3("djsnsdhos");
		//for(auto &cc:s3)
			//cc='x'<<endl;
		for(string::size_type i=0;i<s3.size();i++)
			s3[i]='x';
		cout<<s3<<endl;*/




		//去除字符串中的空格和符号
	string s4, s("dddd");
	getline(cin, s4);
	decltype(s.size()) in = 0;
	for (in = 0; in != s4.size(); in++)
	{

		while (ispunct(s4[in]) || s4[in] == ' ')
		{
			auto i = in;
			while (i < s4.size())
			{
				if (i == s4.size() - 1)
					s4[i] = ' ';
				s4[i] = s4[i + 1];
				++i;
			}

		}


	}
	cout << s4 << endl;



	system("pause");
	return 0;
}

