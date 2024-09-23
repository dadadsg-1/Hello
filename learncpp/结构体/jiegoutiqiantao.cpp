//结构体嵌套：老师代学生
#include<iostream>
#include<string>
using namespace std;

struct student
{
        string name;
        int age;
        int score;
};

struct teacher
{
	int id;
	string name;
	int age;
	struct student stu;//结构体中另一个结构体

};

int main()
{
	teacher t;
	t.id = 10000;
	t.name = "老王";
	t.age = 40;
	t.stu.name = "张三";
	t.stu.age = 20;
	t.stu.score = 60;

	cout << " 老师姓名： " << t.name
	     << " 老师编号： " << t.id
	     << " 老师年龄： " << t.age
	     << " 老师学生姓名： " << t.stu.name
	     << " 老师学生年龄： " << t.stu.age
	     << " 老师学生成绩： " << t.stu.score << endl;

	return 0;
}
