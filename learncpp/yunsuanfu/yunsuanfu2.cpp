#include<iostream>
#include<string>
using namespace std;

int main(){

//取余数"%",小数不能进行取余运算
	int a = 10;
	int b = 3;
	cout << a%b << endl;
	cout << b%a << endl;

//前置递增
	int a1 = 10;
	int b1 = ++a1*10;//a+1
	cout << "a1=" << a1 << endl;
	cout << "b1=" << b1 << endl;
//后置递增
	int a2 = 10;
	int b2 = a2++*10;//b+1
	cout << "a2=" << a2 << endl;
	cout << "b2=" << b2 << endl;
//区别：前置递增先+1，再运算。后置先运算，再+1
//前置递减
//后置递减

return 0;
}
