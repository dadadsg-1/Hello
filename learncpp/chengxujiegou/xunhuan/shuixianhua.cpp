//水仙花数是指一个3位数，每个位上数字的三次幂之和等于本身。
//使用dowhile
#include<iostream>
#include<string>
using namespace std;
int main()
{	int num = 100;
	do 
	{
	int a = 0;
        int b = 0;
        int c = 0;

	a = num / 100;
	b = num / 10 % 10;
 	c = num % 10;
	if((a*a*a) + (b*b*b) + (c*c*c) == num)
		{
		cout << num << endl;
		num++;
		}
	else num++;
	}
	while(num<1000);

	return 0;
}

