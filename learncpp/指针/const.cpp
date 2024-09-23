//const修饰指针：
//1.常量指针
//2.指针常量
//3.既修饰指针又修饰常量

#include<iostream>
using namespace std;

int main()
{
	int a = 10;
	int b = 10;
	int *p = &a;
//1.修饰指针
	const int *p = &a;//指针的指向可以改，指针指向的值不可以改。
	*p = 20;//错误，内容不可以改。
	p = &b;//正确

//2.修饰常量
	int *const p = &a;//指针的指向不可以改，但是指向的值可以改。
	*p = 20;//正确
	p = &b;//错误

//3.既修饰指针又修饰常量
	const int *const p = &a;//都不可更改。


	return 0;
}
