//案例：系统随机生成1-100之间的数字，玩家猜测，猜错提示过大或过小，猜对则结束。
#include<iostream>
#include<string>
using namespace std;
int main ()
{
	int num = rand()%100 + 1; //生成0-99的数字
	int a = 0;
	
	while(a!=num)
	{
		cout << "请输入数字" << endl;
	        cin >> a;
		if(a > num)
		{
			cout << "过大" << endl;
		} 
		else
			cout << "过小" << endl;
		
	}
	cout << "恭喜猜对了" << endl;
	return 0;
}
