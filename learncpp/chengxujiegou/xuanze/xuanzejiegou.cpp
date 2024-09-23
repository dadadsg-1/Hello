//c/c++三种结构：顺序，选择，循环
#include<iostream>
#include<string>
using namespace std;
int main(){
/*//1.单行格式if语句
//用户输入分数
	int score = 0;
	cout << "请输入分数：" << endl;
	cin >> score;
//打印分数
	cout << "分数为：" << score << endl;
//判断
	if (score > 600)
	{
		cout << "一本" << endl;
	}



//2.多行格式if语句
        cout << "请输入分数：" << endl;
        cin >> score;
        cout << "分数为：" << score << endl;
        if (score > 600)
        {
                cout << "一本" << endl;
        }
	else
	{
		cout << "不是一本" << endl;
	}




//3.多条件if语句
	cout << "请输入分数：" << endl;
        cin >> score;
        cout << "分数为：" << score << endl;
        if (score > 600)
        {
                cout << "一本" << endl;
        }
        else if (score > 400)
        {
                cout << "二本" << endl;
        }
	else
	{
		cout << "没考上" << endl;
	}
*/

//qiantao
	int score = 0;
        cout << "请输入分数：" << endl;
        cin >> score;

	if (score > 600)
	{
		cout << "一本" << endl;
		if (score > 700)
		{
		cout << "清华" << endl;
		}
		else if (score > 650)
		{
		cout << "北大" << endl;
		}
		else
		{
		cout << "人大" << endl;
		}

	}
	else if (score >500)
	{
	cout << "二本" << endl;
	}
	else
	{
	cout << "无" << endl;
	}
return 0;
}

















