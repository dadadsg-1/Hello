//声明一个五个元素的数组，并将元素逆置。

#include<iostream>
using namespace std;

int main()
{
	int arr[] = {1,3,2,5,4};
	int a = 0;
	int end = sizeof(arr)/sizeof(arr[0])-1;
	for(int i = 0;i<3;i++)
	{
		a = arr[i];
		arr[i] = arr[end];
		arr[end] = a;
		end--;
	}
	for(int j=0;j<5;j++)
	{
		cout << arr[j] << endl;
	}

	return 0;
}
