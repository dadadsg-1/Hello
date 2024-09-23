/*数组 特点1：数组中每个元素都是相同的数据类型
       特点2：数组是有连续的内存位置组成的
       数组的下标从0开始排  */
#include<iostream>
using namespace std;

int main()
{
	//定义方式1
	//数据类型 数组名[元素个数】
	int score[5];
	score[0] = 10;
	score[1] = 20;
	score[2] = 30;
	score[3] = 40;
	score[4] = 50;

	cout << score[0] << endl;
	cout << score[4] << endl;

	//定义方式2
	//数据类型 数组名[元素个数] = {数值1, 数值2, ...... }
	int arr[5] = {10,20,30,40,50};

	cout << score[0] << endl;
        cout << score[4] << endl;
	
	//定义方式3
	//数据类型 数组名[] = {数值1 数值2 数值3 ...}
	int arr2[] = {10,20,30,40,50};
	for(int i = 0;i < 5;i++)
	{
	cout << arr2[i] << endl;
	}
	


	return 0;
}
