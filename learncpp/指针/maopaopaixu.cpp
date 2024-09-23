//封装一个函数，利用冒泡排序，实现对整型数组的升序排序。
//arr[]={4,3,6,9,1,2,10,8,7,5}
#include<iostream>
using namespace std;

//创建函数
void bubblesort(int *p,int len)
{
	for (int i=0;i<len-1;i++)
	{
		for (int j=0;j<len-i-1;j++)
		{
			if (p[j] > p[j+1])
			{
				int temp = p[j];
				p[j] = p[j+1];
				p[j+1] = temp;
			}
		}
	}
}

void printArray(int *arr,int len)
{
	for (int i = 0;i < len;i++)
	{
		cout << arr[i] <<endl;
	}
}

int main()
{
	int arr[] = {4,3,6,9,1,2,10,8,7,5};//创建数组
	int len = sizeof(arr)/sizeof(arr[0]);//数组元素数
	
	bubblesort(arr,len);
	printArray(arr,len);
        return 0;
}




