//1-100,个位或十位有7，或者该数字是7的倍数，则打印敲桌子，其余数字打印。
#include<iostream>
#include<string>
using namespace std;

int main()
{
	for(int i = 1;i < 101;i++)
	{
		int a = i/10;
		int b = i%10;
		if((a==7)|(b==7)|(i%7==0))
		{
			cout << "敲桌子" << endl;
		}
		else cout << i << endl;
	}
	
	return 0;
}
