//野指针：指向非法的内存空间
//尽量避免出现野指针

#include<iostream>
using namespace std;

int main()
{
//
	int *p = (int *)0x1100;

	cout << *p << endl;//没有访问的权限


	return 0;
}
