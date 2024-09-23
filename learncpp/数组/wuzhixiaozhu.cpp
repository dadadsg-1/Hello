//在一个数组中记载了五个小猪的体重，找出并打印最重的体重。
//
#include<iostream>
#include<string>
using namespace std;

int main()
{
	int arr[] = {300,350,200,400,250};
	
	int max = 0;

	for(int i = 0;i < 5;i++)
	{
		if (arr[i] > max)
		{
			max = arr[i];
		}	
	}

	cout << "最重的是：" << max << endl;
	
	return 0;
}
