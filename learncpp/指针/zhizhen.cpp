//指针就是地址
//32位系统指针占四个字节；64位指针占用八个字节
#include<iostream>
using namespace std;

int main()
{
//1.定义指针
	int a = 10;
	cout << "a的地址" << &a << endl;
	int *p;
	p = &a;

	cout << "指针p= " << p << endl;
	
//2.使用指针：解引用的方式来找到指针指向的内存。指针前加*表示解引用。

	cout << "*p指的是" << *p << endl;

	int b = 1000;
	int *q;

	q = &b;

	cout << "b = " << b << endl;
	cout << "b的地址= " << &b << endl;
	cout << "q的内容" << q << endl;
	cout << "*q的内容" << *q << endl;

	cout << "q的内存= " << sizeof(q) << endl;
	cout << "*q的内存= " << sizeof(*q) << endl;
	return 0;
}

