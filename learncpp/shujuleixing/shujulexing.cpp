#include<iostream>
#include<string>
using namespace std;
int main(){
//1 c 
	char ch1[] = "hello world";
	cout << ch1 << endl;
//2 cpp
	string ch2 = "hello word";
	cout << ch2 << endl;



//bool
	bool flag = true;
	cout << flag << endl;

	flag = false;
	cout << flag << endl;

	cout << "flag=" << sizeof(flag) << endl;

//cin
	int a = 0;
	cout << "a=" << endl;
	cin >> a;
	cout << a <<endl;

	float b = 12.124;
	cout << "b=" << endl;
	cin >> b;
        cout << b << endl;

	char c = 'a';
        cout << "c=" << endl;
        cin >> c;
        cout << c << endl;

	string d = "abcde";
        cout << "d=" << endl;
        cin >> d;
        cout << d << endl;

return 0;
}
