#include<iostream>
#include<string>
using namespace std;

struct student
{
	string name;
	int age;
	int score;
};

void printstu1(student s)//值传递
{
	s.age = 100;
	cout << "在函数中打印的结果为： " << "  姓名： " << s.name << "  年龄： " << s.age << "  分数： " << s.score << endl;
}

void printstu2(student *p)//地址传递
{
	p->age = 1000;
	cout << "在函数2中打印的结果为： " << "  姓名： " << p->name << "  年龄： " << p->age << "  分数： " << p->score << endl;
}

int main()
{
	student s;
	s.name = "张三";
	s.age = 20;
	s.score = 85;

	cout << "在main函数中打印的结果为： " << "  姓名： " << s.name << "  年龄： " << s.age << "  分数： " << s.score << endl;
	printstu1(s);	
	printstu2(&s);	
	cout << "在main函数中打印的结果为： " << "  姓名： " << s.name << "  年>龄： " << s.age << "  分数： " << s.score << endl;

	return 0;
}
