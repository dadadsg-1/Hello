/*三目运算符：表达式1 ？ 表达式2 ： 表达式3
如果1为真，则执行2，并返回2.
如果1为假，则执行3，并返回3.
c++中，返回的是变量，可以继续赋值。
*/
#include<iostream>
#include<string>
using namespace std;
int main(){
//创建abc，比较a和b，将大的值给c。
	int a = 10;
	int b = 20;
	int c = 0;

	c = (a > b ? a : b);
	cout << c << endl;

	(a > b ? a : b) = 100;
	cout << "a=" << a << endl;
	cout << "b=" << b << endl;

return 0;
}
