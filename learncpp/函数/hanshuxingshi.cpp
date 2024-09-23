#include<iostream>
using namespace std;

//1.无参无返
void test01()
{
	cout << "test" << endl;
}

//2.有参无返
void test02(int a)
{
	cout << "test" << a << endl;
}

//3.无参有返
int test03()
{
	cout << "test03" << endl;
	return 1000;
}

//4.有参有返
int test04(int a)
{
	cout << "test04" << a << endl;
	return a;
}

int main()
{
	test01();
	test02(100);
	int a = test03();
	cout << "num1=" << a <<endl;
	int b = test04(100000);
        cout << "num2=" << b <<endl;

	return 0;
}
