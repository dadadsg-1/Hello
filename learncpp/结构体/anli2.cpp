//设计一个英雄的架构体：包括姓名，年龄，性别；创建结构体数组，存放五名英雄。通过冒泡排序，按年龄升序排列并打印。

#include<iostream>
#include<string>
using namespace std;

struct hero
{
	string name;
	int age;
	string sex;

};

void bubble(hero *harr,int len)
{
	for(int i = 0;i < len-1;i++)
	{
		for(int j = 0;j < len-i-1;j++)
		{
			if (harr[j].age > harr[j+1].age)
			{
				hero temp = harr[j];
				harr[j] = harr[j+1];
				harr[j+1] = temp;
			}
		}
	}
}

void printhero(hero *arr,int len)
{
	for(int i = 0;i<len;i++)
	{
		cout << " 姓名:  " << arr[i].name
		     << " 年龄:  " << arr[i].age 
		     << " 性别:  " << arr[i].sex << endl;
	}
}

int main()
{
	hero harr[5] = 
	{
		{"刘备",23,"男"},
		{"关羽",22,"男"},
		{"张飞",20,"男"},
		{"赵云",21,"男"},
		{"貂蝉",19,"女"}
	};

	int len = sizeof(harr)/sizeof(harr[0]);

	cout << "排序前： " << endl;
	printhero(harr,len);

	bubble(harr,len);
	cout << "排序后： " << endl; 
	printhero(harr,len);

	return 0;
}
