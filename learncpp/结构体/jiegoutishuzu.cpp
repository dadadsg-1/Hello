//struct 结构体名 数组名[]={ {},{},{}....};

#include<iostream>
#include<string>
using namespace std;

struct student//定义结构体
{
	string name;
	int age;
	int score;
};

int main()
{
	struct student stuarr[3] =//创建结构体数组
	{
		{"张三",18,100},
		{"李四",28,99},
		{"王五",38,66}//给结构体数组赋值
	};
	
	stuarr[2].name = "赵六";
	stuarr[2].age = 80;
	stuarr[2].score = 60;//定义好的信息可以更改

	for (int i = 0;i<3;i++)
	{
		cout << "姓名: " << stuarr[i].name 
		     << "年龄: " << stuarr[i].age
		     << "分数: " << stuarr[i].score << endl;
	}

	return 0;
}
