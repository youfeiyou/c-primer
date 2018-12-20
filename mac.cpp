#include <iostream>
#include <cstdio>
#include <cstring>
#include <cmath>
#include <cstdlib>
#include <algorithm>
#include <vector>
#include <stack>
#include <queue>
using namespace std;
#define SZ(v) ((int)(v).size())
#define max 1000
#define N 100
struct node
{
	int Element[N];//模式类元素
	int Sample;//类别
} Node[max];
int n;//模式类的维数
int m;//每个模式类的元素个数
node W_vector;//初始权向量
node Mid_vector[N];//修正后的权向量
node tem[N];
void Large_vector(node X[]) //样本的增广
{
	for (int j = 0; j <= 2 * m - 1; j++)
		X[j].Element[n] = 1;
}
void Init(node *Quan) //初始权向量的初始化
{
	for (int j = 0; j <= n; j++)
		Quan->Element[j] = 1;
}
int Mul_vector(node a, node b) //向量相乘，用以计算中间修正过程
{
	int Product = 0;//乘积
	for (int j = 0; j <= n; j++)
		Product += a.Element[j] * b.Element[j];
	return Product;
}
node Add_vector(node a, node b)
{
	node Differ;
	for (int j = 0; j <= n; j++)
		Differ.Element[j] = a.Element[j] + b.Element[j];
	return Differ;
}
node Dec_vector(node a, node b)
{
	node Differ;
	for (int j = 0; j <= n; j++)
		Differ.Element[j] = a.Element[j] - b.Element[j];
	return Differ;
}
bool Judge_identical(node X[]) //判断迭代过程中是否出现权向量都相同
{
	int flag = 0;//判断标志
	for (int l = 0; l <= 2 * m - 1; l++)
		for (int s = l + 1; s <= 2 * m - 1; s++)
			for (int t = 0; t <= n; t++)
				if (X[l].Element[t] != X[s].Element[t])
					return false;
	return true;
}
void Preceptron(node X[], node W[]) //感知器算法
{
	int i, j, l;
	int cum = 0;
	do
	{
		int ags;
		for (i = 0; i <= 2 * m - 1; i++)
		{
			ags = Mul_vector(W[cum], X[i]);//求修正判断数
			if (i <= m - 1) //如果为第一类
			{
				if (ags > 0) //结果大于0，则不用修正
				{
					tem[i] = W[cum];
					cout << "不修正" << " W" << cum + 1 << endl;
				}
				else
				{
					cout << "修正" << " W" << cum + 2 << "=" << " W" << cum + 1 << " - x" << i + 1 << endl;
					cum++;
					W[cum] = Add_vector(W[cum - 1], X[i]);//为第一类的修改是当前权值加上使之要修改的样本值
					tem[i] = W[cum];
				}
			}
			else
			{
				if (ags < 0)
				{
					tem[i] = W[cum];
					cout << "不修正" << " W" << cum + 1 << endl;
				}
				else
				{
					cout << "修正" << " W" << cum + 2 << "=" << " W" << cum + 1 << " - x" << i + 1 << endl;
					cum++;
					W[cum] = Dec_vector(W[cum - 1], X[i]);//为第二类的修改是当前权值减去使之要修改的样本值
					tem[i] = W[cum];//保存权值,用于判断
				}
			}

		}
	} while (!Judge_identical(tem)); //判断是否达到跳出状态，即当某次修改后的权值都是一样的
}

int main()
{
	int i, j;
	cout << "请输入模式类的维数:  ";
	cin >> n;
	cout << "请输入每个模式类的样本数(这里按照两类w1,w2):  ";
	cin >> m;
	for (i = 0; i <= 2 * m - 1; i++)
	{
		for (j = 0; j <= n - 1; j++)
		{
			cin >> Node[i].Element[j];
		}
	}
	Large_vector(Node);
	Init(&Mid_vector[0]);
	Preceptron(Node, Mid_vector);
	system("pause");
	return 0;
}
