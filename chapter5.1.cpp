#include<iostream>
#include<string>
#include<vector>
using namespace std;
int main()
{
const vector<string> gra{"f","d","c","b","a","a++"};
int sco;string st;
/*cin>>sco;
if(sco<60)st=gra[0];
else
{
	st=gra[(sco-50)/10];
	if(sco!=100){
	if(sco%10>7)st+='+';
	if(sco%10<3)st+='-';
	}
}

cout<<st<<endl;

st=sco<60?gra[0]:(sco<70)?gra[1]:(sco<80)?gra[2]:(sco<90)?gra[3]:(sco<100)?gra[4]:gra[5];
	cout<<st<<endl;*/

char ch,ch1;
int ffcnt=0,ficnt=0,flcnt=0,fcnt=0;
while(cin>>ch)
{
	if(ch=='f'&&fcnt!=1)
	{
		++fcnt;
		continue;
	}
		if(fcnt==1){
	switch(ch)
		 {
		case 'f':ffcnt++;break;
		case 'l':flcnt++,--fcnt; break;
		case 'i':ficnt++,--fcnt; break;
		default:--fcnt;break;
		 }
		
		}
	
	
	
	

}
cout<<ffcnt<<" "<<ficnt<<" "<<flcnt<<" "<<endl;
	system("pause");
	return 0;
}