#include<iostream>
#include<string>
#include"Sale.h"
using namespace std;
int main()
{
	Sale item1,item2;
	int price;
	cin>>item1.bookno>>item1.unit_sold>>price;
	item1.revenue= item1.unit_sold*price;
	cin >> item2.bookno >> item2.unit_sold >> price;
	item2.revenue = item2.unit_sold*price;
	if(item1.bookno==item2.bookno)
	{
	  int totalsold=item1.unit_sold+item2.unit_sold;
	  double totalre=item1.revenue+ item2.revenue;
	
	cout<< totalsold<<" "<< totalre;
	}
	else cerr<<"wrong"<<endl;
	system("pause");
	return 0;
}