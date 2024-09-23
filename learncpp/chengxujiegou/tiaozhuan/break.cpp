//用于跳出选择结构或循环结构 break
#include<iostream>
#include<string>
using namespace std;

int main()
{
//1.出现在switch语句中
/*	cout << "选择难度" << endl;
	cout << "1.普通" << endl;
	cout << "2.中等" << endl;
	cout << "3.困难" << endl;
	
	int select = 0;
	cin >> select;	
	switch(select)
	{
		case 1:
			cout << "普通" << endl;
			break;
		case 2:
			cout << "中等" << endl;
			break;
		case 3:
			cout << "困难" << endl;
			break;
		default:
			break;
	}
*/

//2.出现在循环语句中
/*
	for (int i = 0;i < 10;i++)
	{
		if(i==5)
		{
			break;
		}
		cout << i << endl;
	}
*/

//3.出现在嵌套循环语句中

	for (int i = 0;i<10;i++)
	{
		for (int j = 0;j < 10;j++)
		{
			if (j==5)
			{
				break;
			}
			cout << "* ";
		}
		cout << endl;
	}
	return 0;
}
