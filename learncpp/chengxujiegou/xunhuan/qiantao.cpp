//循环里还有循环
#include<iostream>
#include<string>
using namespace std;

int main()
{
	for (int j = 0;j<10;j++)
	{
		for (int i = 0;i<10;i++)
		{
		cout << "* ";
		}
		cout << endl;
	}
	return 0;
}
