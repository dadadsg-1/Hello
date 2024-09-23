//函数分文件编写的步骤：
/*
1.创建后缀为.h的头文件；
2.创建后缀为.cpp的源文件；
3.在头文件中写函数的声明；
4.在源文件中写函数的定义。
*/

//两个数字交换的函数：
#include<iostream>
#include"swap.h"
using namespace std;
/*
void swap(int a,int b);//声明
void swap(int a,int b)//定义
{
	int temp = a;
	a = b;
	b = temp;

	cout << "a = " << a << endl;
	cout << "b = " << b << endl;

}
*/
int main()
{
	int a = 10;
	int b = 20;
	swap(a,b);

	return 0;


}
