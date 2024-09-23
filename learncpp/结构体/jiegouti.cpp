//自定义数据类型
//struct 名 {成员列表}

#include<iostream>
#include<string>
using namespace std;

//1.创建学生数据类型：学生（姓名，年龄，分数）；
//一些类型集合组成一个类型
//语法

struct student
{
//成员列表

//姓名
	string name;
//年龄
	int age;
//分数
	int score;
};

//2.具体创建
//2.1.struct student s1
//2.2.struct student s2
//2.3.创建结构体变量

int main()
{
	struct student s1;
	s1.name = "张三";//给s1属性赋值，通过".”访问结构体变量中的属性
	s1.age = 18;
	s1.score = 100;

	cout << "姓名： " << s1.name << "  年龄： " << s1.age << " 分数： " << s1.score << endl;
	
	struct student s2 = {"李四",19,80};
	 cout << "姓名： " << s2.name << "  年龄： " << s2.age << " 分数： " << s2.score << endl;

	return 0;
}
