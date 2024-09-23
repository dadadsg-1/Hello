//通过指针访问结构体
//利用『-> 』可以通过结构体指针访问结构体属性

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
	struct student s = {"张三",18,100};
	
	struct student *p = &s;//指针指向：注意类型
	
	cout << " 姓名： " << p->name << " 年龄: " << p->age << " 分数 " << p->score << endl;

	return 0;
}
