#include<iostream>
using std::cin;using std::cout;using std::endl;
struct foo{};

int main()
{
                       // 2.4 作业

/*constexpr int *p=nullptr;
const int *q=nullptr;

typedef int a,*p1;
a b;

constexpr p1 pp=&b;
cout<<*pp;*/

	                       //2.5作业
	int i=0,&r=i;
	const int ci=i,&cr=ci;
	auto a=r;
	auto b=ci;
	auto c=cr;
	auto d=&i;
	auto e=&ci;
	const auto f=ci;
	auto &g=ci;
	const auto &j=42;
	
system("pause");
return 0;
}