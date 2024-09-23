//函数声明可以有多次，但是定义只能有一次。
//函数的声明



#include<iostream>
using namespace std;

//比较函数，返回较大值
/*
int max(int a,int b)
{
	return  a > b ? a : b;
}

int main()
{
	int a = 10;
	int b = 20;
	
	cout << max(a,b) << endl;
	return 0;
}
*/


//声明：提前告诉编译器函数存在
int max(int a,int b);

int main()
{
        int a = 10;
        int b = 20;
        
        cout << max(a,b) << endl;
        return 0;
}

int max(int a,int b)
{
        return  a > b ? a : b;
}




