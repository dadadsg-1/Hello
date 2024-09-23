//数组名可以统计数组在内存中的长度，也可以获取数组在内存中的首地址。

#include<iostream>
using namespace std;

int main()
{
	int arr[] = {1,2,3,4,5,6,7,8,9,10};
//1.内存
	cout << "整个数组所占内存空间：" << sizeof(arr) << endl;
	cout << "每个元素所占内存空间：" << sizeof(arr[0]) << endl;
	cout << "数组元素个数：" << sizeof(arr)/sizeof(arr[0]) << endl;

//2.地址
	cout << "数组首地址：" << (long long)arr << endl;
	cout << "数组中第三个元素的地址：" << (long long) &arr[2] << endl;

	return 0;
}
