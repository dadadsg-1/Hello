//do while 会先执行再判断
#include<iostream>
#include<string>
using namespace std;
int main()//输出0-9十个数字
{
	int num = 0;
	do
	{
		cout << num << endl;
		num++;
	}
	while (num < 10);
	return 0;
}
