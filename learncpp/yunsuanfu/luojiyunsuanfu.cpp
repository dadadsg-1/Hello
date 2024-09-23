#include<iostream>
#include<string>
using namespace std;
int main(){
//逻辑运算
//非
	int a = 10;
	cout << (!a) << endl;//除了0都为真，取非则为假0.
	cout << (!!a) << endl;//真变假，假变真。
//与
	int c = 1;
	int b = 0;
	cout << (c&&b) << endl;
//或
	cout << (c||b) << endl;
return 0;
}
