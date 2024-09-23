//指针和数组，利用指针访问数组中元素

#include<iostream>
using namespace std;

int main()
{
	int arr[] = {1,2,3,4,5,6,7,8,9,10};
	
	cout << "数组中第一个元素： " << arr[0] << endl;
	
	int *p = arr;

	cout << "利用指针访问第一个元素： " << *p << endl;
	cout << "利用指针访问第一个元素地址： " << &*p << endl;
	cout << "指针的地址"  << p << endl;
	p++;//指针向后偏移四个字节
	cout << "利用指针访问第二个元素： " << *p << endl;
	cout << "利用指针访问第二个元素地址： " << &*p << endl;
	cout << "指针的地址"  << p << endl;

	
	return 0;
}
