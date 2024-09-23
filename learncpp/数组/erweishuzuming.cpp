//查看二维数组所占空间；获取二位数组首地址
#include<iostream>
using namespace std;

int main()
{
	int arr[2][3] = {{1,2,3},{4,5,6}};

	cout << "二位数组大小：" << sizeof(arr) << endl;
	cout << "二位数组一行大小：" << sizeof(arr[0]) << endl;
	cout << "二位数组元素大小：" << sizeof(arr[0][0]) << endl;
	cout << "二维数组行数：" << sizeof(arr)/sizeof(arr[0]) << endl;
	cout << "二维数组列数：" << sizeof(arr[0])/sizeof(arr[0][0]) << endl;

	cout << "二位数子首地址：" << (long long)arr << endl;
	cout << "第二行首地址" << (long long)arr[1] << endl;
	cout << "第三个元素的地址：" << (long long)&arr[0][2] << endl;
//具体元素的地址需要加上“&”

	return 0;
}
