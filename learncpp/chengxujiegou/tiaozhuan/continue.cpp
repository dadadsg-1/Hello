//cintinue:循环中跳过尚未执行的语句，继续下一次循环。
//o-100输出
#include<iostream>
#include<string>
using namespace std;

int main()
{
	for (int i = 0;i<101;i++)
	{
		if (i%2 == 0)
		{
			continue;//筛选条件，跳过本次，继续下次。break完全跳出
		}
		cout << i << endl;
	}
	
	
	return 0;
}
