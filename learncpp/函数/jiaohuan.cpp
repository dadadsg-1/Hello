//值传递
#include<iostream>
using namespace std;

//定义一个交换的函数：
//如果一个函数不需要返回值，可以声明一个void
void swap(int num1,int num2)
{
	cout << "交换前" << "num1=" << num1 << "num2" << num2 << endl;
	int a = num1;
	num1 = num2;
	num2 = a;
	cout << "交换后" << "num1=" << num1 << "num2" << num2 << endl;
	return;//可以不写
}

int main()
{
	int a = 10;
	int b = 50;
	
	cout << "a=" << a << endl;
        cout << "b=" << b << endl;

	swap(a,b);	//形参改变不会改变实参。
	cout << "a=" << a << endl;
	cout << "b=" << b << endl;
	return 0;
}
