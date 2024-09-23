//const可以防止误操作
#include<iostream>
#include<string>
using namespace std;

struct student
{
	string name;
	int age;
	int score;
};

void printstu(const student *t)//指针可以节省空间,不会复制新的副本。const保证不会修改原数据
{
	cout << "姓名： " << s->name << "  nianling: " << s->age << "  fenshu: " << s->score <<endl;
}

int main()
{
	student s;
	s.name = "张三";
	s.age = 20;
	s.score = 85;

	printstu(&s);

	return 0;
}
