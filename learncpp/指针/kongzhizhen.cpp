//空指针：指向内存中编号为0的空间。用于初始化指针变量。内存不可访问。
#include<iostream>
using namespace std;

int main()
{
//1.用于初始化
	int *p = NULL;//NULL 地址编号0
		
//2.空指针无法访问；0-255之间的编号是系统占用的，因此不可访问。
//	*p = 1000; //无法访问	

	return 0;
}
