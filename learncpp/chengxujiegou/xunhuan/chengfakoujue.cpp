//用嵌套循环完成乘法口诀表
#include<iostream>
using namespace std;

int main()
{
	for (int i = 1;i<10;i++)
	{
		for (int j = 1;j<=i;j++)
		{
			cout << "  " << j << "x" << i << "="  << i*j;
		}
		cout << endl;
	}



	return 0;
}
