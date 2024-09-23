#include<iostream>
using namespace std;

int main(){

	short num1 = 10;
	cout << "short  =" << sizeof(num1) << endl;

	int num2 = 10;
        cout << "int  =" << sizeof(num2) << endl;

	long num3 = 10;
        cout << "long  =" << sizeof(num3) << endl;

	long long num4 = 10;
        cout << "long long  =" << sizeof(num4) << endl;

	float num5 = 3.14315f;
        cout << "float =" << sizeof(num5) << endl;
	cout << "num5=" << num5 << endl;

	double num6 = 3.562654724;
	cout << "num6 =" << sizeof(num6) << endl;
	cout << "num6=" << num6 << endl;

return 0;
}

