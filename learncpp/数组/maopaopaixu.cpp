//冒泡排序
//1.比较相邻的元素。如果第一个比第二个大就交换。
//2.对每一对相邻元素做同样工作，执行完毕后，找到第一个最大值。
//3.重复以上步骤，每次比较次数减1，直到完成。
//排序总轮数=元素个数-1
//每轮对比次数=元素个数-排序轮数-1

#include<iostream>
using namespace std;

int main()
{
	int arr[] = {4,2,8,0,5,7,1,3,9};

	cout << "排序前：" << endl;
	for (int i = 0;i<9;i++)
	{
		cout << arr[i] << " ";
	}
	cout << endl;

	for (int i = 0;i < 9-1;i++)
	{
		for (int j = 0;j < 9-i-1;j++)
		{
			if (arr[j] > arr[j+1])
			{
				int  temp = arr[j];
				arr[j] = arr[j+1];
				arr[j+1] = temp;
			}
		}

	} 		
	
	cout << "排序后：" << endl;
        for (int i = 0;i<9;i++)
        {
                cout << arr[i] << " ";
        }
        cout << endl;



	return 0;
}
