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
	int Element[N];//ģʽ��Ԫ��
	int Sample;//���
} Node[max];
int n;//ģʽ���ά��
int m;//ÿ��ģʽ���Ԫ�ظ���
node W_vector;//��ʼȨ����
node Mid_vector[N];//�������Ȩ����
node tem[N];
void Large_vector(node X[]) //����������
{
	for (int j = 0; j <= 2 * m - 1; j++)
		X[j].Element[n] = 1;
}
void Init(node *Quan) //��ʼȨ�����ĳ�ʼ��
{
	for (int j = 0; j <= n; j++)
		Quan->Element[j] = 1;
}
int Mul_vector(node a, node b) //������ˣ����Լ����м���������
{
	int Product = 0;//�˻�
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
bool Judge_identical(node X[]) //�жϵ����������Ƿ����Ȩ��������ͬ
{
	int flag = 0;//�жϱ�־
	for (int l = 0; l <= 2 * m - 1; l++)
		for (int s = l + 1; s <= 2 * m - 1; s++)
			for (int t = 0; t <= n; t++)
				if (X[l].Element[t] != X[s].Element[t])
					return false;
	return true;
}
void Preceptron(node X[], node W[]) //��֪���㷨
{
	int i, j, l;
	int cum = 0;
	do
	{
		int ags;
		for (i = 0; i <= 2 * m - 1; i++)
		{
			ags = Mul_vector(W[cum], X[i]);//�������ж���
			if (i <= m - 1) //���Ϊ��һ��
			{
				if (ags > 0) //�������0����������
				{
					tem[i] = W[cum];
					cout << "������" << " W" << cum + 1 << endl;
				}
				else
				{
					cout << "����" << " W" << cum + 2 << "=" << " W" << cum + 1 << " - x" << i + 1 << endl;
					cum++;
					W[cum] = Add_vector(W[cum - 1], X[i]);//Ϊ��һ����޸��ǵ�ǰȨֵ����ʹ֮Ҫ�޸ĵ�����ֵ
					tem[i] = W[cum];
				}
			}
			else
			{
				if (ags < 0)
				{
					tem[i] = W[cum];
					cout << "������" << " W" << cum + 1 << endl;
				}
				else
				{
					cout << "����" << " W" << cum + 2 << "=" << " W" << cum + 1 << " - x" << i + 1 << endl;
					cum++;
					W[cum] = Dec_vector(W[cum - 1], X[i]);//Ϊ�ڶ�����޸��ǵ�ǰȨֵ��ȥʹ֮Ҫ�޸ĵ�����ֵ
					tem[i] = W[cum];//����Ȩֵ,�����ж�
				}
			}

		}
	} while (!Judge_identical(tem)); //�ж��Ƿ�ﵽ����״̬������ĳ���޸ĺ��Ȩֵ����һ����
}

int main()
{
	int i, j;
	cout << "������ģʽ���ά��:  ";
	cin >> n;
	cout << "������ÿ��ģʽ���������(���ﰴ������w1,w2):  ";
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
