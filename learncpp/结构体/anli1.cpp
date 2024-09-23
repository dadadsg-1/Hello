//案例1：每名老师带五个学生作毕业设计，共三名老师。设计结构体

#include<iostream>
#include<string>
#include<ctime>
using namespace std;

struct student
{
	string sname;//学生姓名
	int score;//学生分数
};

struct teacher//老师的结构体
{
	string tname;//老师姓名
	student sarr[5];//学生数组五个
};

void allocatespace(teacher tarr[],int len)
{
	string nameSeed = "ABCDE";//
	for(int i = 0;i < len;i++)//给老师赋值
	{
		tarr[i].tname = "Teacher_";
		tarr[i].tname += nameSeed[i];
		
		for(int j = 0;j < 5;j++)
		{
			tarr[i].sarr[j].sname = "Student_";
 			tarr[i].sarr[j].sname += nameSeed[j];
			//随机分数
			int random = rand() % 60 + 40;//(0-59)+40
			tarr[i].sarr[j].score = random;
		}
	}
}

void printinfo(teacher tarr[],int len)
{
	for(int i=0;i<len;i++)
	{
		cout << " 老师姓名： " << tarr[i].tname << endl;
		
		for(int j=0;j<5;j++)
		{
			cout << "\t学生姓名： " << tarr[i].sarr[j].sname 
			     << " 学生分数： " << tarr[i].sarr[j].score << endl;
		}
		cout << endl;
	}

}

int main()
{
//随机数种子
	srand((unsigned int)time(NULL));

	//创建老师的数组
	teacher tarr[3];
	int len = sizeof(tarr)/sizeof(tarr[0]);

	//通过函数给信息赋值
	allocatespace(tarr,len);

	//打印所有老师及学生信息
	printinfo(tarr,len);

	return 0;
}
