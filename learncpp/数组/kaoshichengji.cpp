//三名同学z3,l4,w5,成绩已知，分别输出总成绩。

#include<iostream>
#include<string>
using namespace std;

int main()
{
	int score[3][3] = 
	{
		{100,100,100},
		{90,50,100},
		{60,70,80}
	};

	int sum = 0;

	for (int i = 0;i<3;i++)
	{
		switch(i)
		{
		case 0:
			sum = 0;
			for (int j=0;j<3;j++)
			{
				sum += score[i][j];		
			}
			cout << "张三的总成绩：" << sum << endl;
			break;
		
		case 1:
        		sum = 0;
	                for (int j=0;j<3;j++)
                        {
                                sum += score[i][j];
                        }
                        cout << "李四的总成绩：" << sum << endl;
                        break;

	
		case 2:
			sum = 0;
                        for (int j=0;j<3;j++)
                        {
                                sum += score[i][j];
                        }
                        cout << "王五的总成绩：" << sum << endl;
                        break;
		}
	}
	return 0;
}
